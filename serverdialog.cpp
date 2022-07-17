#include "serverdialog.h"
#include "ui_serverdialog.h"

ServerDialog::ServerDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ServerDialog)
{
    ui->setupUi(this);
    // 异步通信，客户端发送连接请求时，发送信号
    connect(&tcpServer, SIGNAL(newConnection()), this, SLOT(onNewConnection()));
    // 定时器到时，检查客户端连接状态
    connect(&timer, SIGNAL(timeout()), this, SLOT(onTimeout()));
}

ServerDialog::~ServerDialog()
{
    delete ui;
}

// 开启服务器槽函数
void ServerDialog::on_CreateButton_clicked()
{
    // 获取服务器端口
    port = ui->PortEdit->text().toUShort();
    // 设置服务器IP和端口
    if (tcpServer.listen(QHostAddress::Any, port) == true)
    {
        qDebug() << "Create Success!";
        // 成功开启后禁止修改端口和重复启动
        ui->PortEdit->setEnabled(false);
        ui->CreateButton->setEnabled(false);
        // 开启定时器
        timer.start(3000);
    }
    else
    {
        qDebug() << "Create Faild!"; // 端口被占用等情况
    }
}

// 响应客户端连接请求，newConnection信号针对单线程，用户过多时可能会卡死
// 使用incongingConnection虚方法针对多线程，解决多用户卡死问题
void ServerDialog::onNewConnection()
{
    // 获取和客户端通信的socket
    QTcpSocket* tcpClient = tcpServer.nextPendingConnection();
    // 保存socket到容器
    tcpClientList.append(tcpClient);
    // 当客户端发送消息时，触发readyRead信号
    connect(tcpClient, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
}

// 接收客户端消息的槽函数
void ServerDialog::onReadyRead()
{
    // 遍历容器，确定客户端
    for (int i = 0; i < tcpClientList.size(); i++)
    {
        // 获取当前socket等待读取消息的字节数,如果没有新消息，则为0
        if (tcpClientList.at(i)->bytesAvailable())
        {
            // QByteArray可动态变化的缓冲区
            QByteArray buf = tcpClientList.at(i)->readAll();
            // 显示消息
            ui->listWidget->addItem(buf);
            ui->listWidget->scrollToBottom();
            // 转发客户端
            sendMessage(buf);
        }
    }
}

// 转发消息
void ServerDialog::sendMessage(const QByteArray& buf)
{
    for (int i = 0; i < tcpClientList.size(); i++)
    {
        tcpClientList.at(i)->write(buf);
    }
}

// 定时器到时槽函数，检查客户端连接状态
void ServerDialog::onTimeout()
{
    // 遍历检查容器中保存的客户端通信socket是否已经断开连接
    for (int i = 0; i < tcpClientList.size(); i++)
    {
        if (tcpClientList.at(i)->state() == QAbstractSocket::UnconnectedState)
        {
            tcpClientList.removeAt(i);
            // 下标回滚
            i--;
        }
    }
}

#include "clientdialog.h"
#include "ui_clientdialog.h"

ClientDialog::ClientDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ClientDialog)
{
    ui->setupUi(this);
}

ClientDialog::ClientDialog(int width, int height, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ClientDialog)
{
    m_width = width;
    m_height = height;
    this->setFixedSize(m_width, m_height);
    ui->setupUi(this);
    this->setMinimumSize(0, 0);
    this->setMaximumSize(1920, 1080);
    status = false;

    connect(&tcpSocket, SIGNAL(connected()), this, SLOT(onConnected()));
    connect(&tcpSocket, SIGNAL(disconnected()), this, SLOT(onDisconnected()));
    connect(&tcpSocket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
    connect(&tcpSocket, SIGNAL(errorOccurred(QAbstractSocket::SocketError)), this, SLOT(onError()));

}

ClientDialog::~ClientDialog()
{
    delete ui;
}

// 发送消息
void ClientDialog::on_SendButton_clicked()
{
    // 获取用户输入的聊天消息
    QString msg = ui->MssageEdit->text();
    if (msg == "")
    {
        return;
    }
    msg = username + ":" + msg;
    tcpSocket.write(msg.toUtf8());
    // 清空输入框
    ui->MssageEdit->clear();
}

// 建立连接
void ClientDialog::on_ConnectButton_clicked()
{
    // 判断客户端当前是否在线
    if (status == false)
    {
        // 获取服务器IP
        serverIP.setAddress(ui->HostEdit->text());
        // 获取端口号
        serverPort = ui->PortEdit->text().toShort();
        // 获取用户昵称
        username = ui->UserEdit->text();
        // 向服务器发送连接请求, 成功触发connected信号，失败触发error信号
        tcpSocket.connectToHost(serverIP, serverPort);
    }
    else
    {
        // 向服务器发送断开消息（因为断开后就无法发送消息，所以这一过程不能写在断开的槽函数中）
        QString msg = username + ":disconnected!";
        // toUtf8:QString转换为QByteArray
        tcpSocket.write(msg.toUtf8());
        // 断开连接,触发disconnected信号
        tcpSocket.disconnectFromHost();
    }
}

void ClientDialog::onConnected()
{
    status = true;
    ui->SendButton->setEnabled(true);
    ui->UserEdit->setEnabled(false);
    ui->HostEdit->setEnabled(false);
    ui->PortEdit->setEnabled(false);
    ui->ConnectButton->setText("Disconnect");

    // 向服务器发送进入聊天室提示消息
    QString msg = username + ":connected!";
    // toUtf8:QString转换为QByteArray
    tcpSocket.write(msg.toUtf8());
}
// 和服务器断开连接时执行的槽函数
void ClientDialog::onDisconnected()
{
    status = false;
    ui->SendButton->setEnabled(false);
    ui->UserEdit->setEnabled(true);
    ui->HostEdit->setEnabled(true);
    ui->PortEdit->setEnabled(true);
    ui->ConnectButton->setText("Connect");
}
// 接收聊天消息的槽函数
void ClientDialog::onReadyRead()
{
    if (tcpSocket.bytesAvailable())
    {
        // 接收全部消息
        QByteArray buf = tcpSocket.readAll();
        // 显示消息
        ui->listWidget->addItem(buf);
        ui->listWidget->scrollToBottom();
    }

}
// 网络异常执行的槽函数
void ClientDialog::onError()
{
    // 快速构建消息框，通过errorString()获取网络异常原因
    QMessageBox::critical(this, "ERROR", tcpSocket.errorString());
}


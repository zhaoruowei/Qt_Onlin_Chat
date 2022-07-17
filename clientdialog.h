#ifndef CLIENTDIALOG_H
#define CLIENTDIALOG_H

#include <QDialog>
#include <QTcpSocket>
#include <QHostAddress>
#include <QMessageBox>
#include <QDebug>


QT_BEGIN_NAMESPACE
namespace Ui { class ClientDialog; }
QT_END_NAMESPACE

class ClientDialog : public QDialog
{
    Q_OBJECT

public:
    ClientDialog(QWidget *parent = nullptr);
    ClientDialog(int width, int height, QWidget *parent = nullptr);
    ~ClientDialog();

private slots:
    // 发送消息
    void on_SendButton_clicked();
    // 建立连接
    void on_ConnectButton_clicked();
    // 和服务器连接成功时执行的槽函数
    void onConnected();
    // 和服务器断开连接时执行的槽函数
    void onDisconnected();
    // 接收聊天消息的槽函数
    void onReadyRead();
    // 网络异常执行的槽函数
    void onError();

private:
    Ui::ClientDialog *ui;
    int m_width;
    int m_height;
    bool status; // 标识客户端状态
    QTcpSocket tcpSocket; // 和服务器通信的socket
    QHostAddress serverIP; // 服务器地址
    quint16 serverPort; // 服务器端口
    QString username; // 客户端昵称
};
#endif // CLIENTDIALOG_H

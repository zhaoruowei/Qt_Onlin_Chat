#ifndef SERVERDIALOG_H
#define SERVERDIALOG_H

#include <QDialog>
#include <QTcpServer>
#include <QTcpSocket>
#include <QDebug>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class ServerDialog; }
QT_END_NAMESPACE

class ServerDialog : public QDialog
{
    Q_OBJECT

public:
    ServerDialog(QWidget *parent = nullptr);
    ~ServerDialog();

private slots:
    // 启动服务器
    void on_CreateButton_clicked();
    // 响应客户端连接请求
    void onNewConnection();
    // 接收客户端消息的槽函数
    void onReadyRead();
    // 定时器到时，检查客户端连接状态
    void onTimeout();

private:
    // 转发消息的槽函数
    void sendMessage(const QByteArray& buf);

private:
    Ui::ServerDialog *ui;
    QTcpServer tcpServer;
    quint16 port; // 相当于unsigned short类型，表示端口号
    QList<QTcpSocket*> tcpClientList; // 保存所有和客户端通信的socket
    QTimer timer;
};
#endif // SERVERDIALOG_H

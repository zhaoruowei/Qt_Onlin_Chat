#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QPainter>
#include <QImage>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    LoginDialog(int width, int height, QWidget *parent = nullptr);
    ~LoginDialog();

public:
    QString m_windowName;

signals:
    // 向主窗口发送转换窗口信号
    void transWindow(const QString&,const QString&);

private slots:
    // 点击发送登录请求
    void SignInBtn_clicked();
    // 点击向主窗口发送窗口转换信号，转换注册窗口
    void SignUpBtn_clicked();
    // 点击向主窗口发送窗口转换信号，退回主窗口
    void BackBtn_clicked();

private:
    // 重载绘图事件
    void paintEvent(QPaintEvent *);
    // 重载关闭事件
    void closeEvent(QCloseEvent *);

private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "logindialog.h"
#include "registerdialog.h"
#include "clientdialog.h"

#include <QWidget>
#include <QPainter>
#include <QImage>

namespace Ui {
class MainWindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(int width, int height, QWidget *parent = nullptr);
    ~MainWindow();

public:
    int m_width;
    int m_height;
    QString m_windowName;

signals:
    // 接收其他子窗口发送的切换窗口信号，触发主窗口发送切换信号，transWindow: 要切换的窗口名称
    void transWindow(const QString&,const QString&);

private slots:
    // 跳转登录窗口槽函数
    void SignInBtn_clicked();
    // 跳转注册窗口槽函数
    void SignUpBtn_clicked();
    // 接父窗口触发的切换窗口信号,transWindow: 要切换的窗口名称
    void TransWindow_emited(QString currentWindow, QString transWindow);

private:
    // 重写画图事件
    void paintEvent(QPaintEvent *);
    // 切换窗口后，释放触发切换窗口信号的当前窗口
    void closeWindow(QString currentWindow);

private:
    Ui::MainWindow *ui;
    LoginDialog *m_SignInWindow;
    RegisterDialog *m_SignUpWindow;
    ClientDialog *m_ClientWindow;
};

#endif // MAINWINDOW_H

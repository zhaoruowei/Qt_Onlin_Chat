#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include <QDialog>
#include <QPainter> // 画家类
#include <QImage> // 图片

namespace Ui {
class RegisterDialog;
}

class RegisterDialog : public QDialog
{
    Q_OBJECT

public:
    RegisterDialog(int width, int height, QWidget *parent = nullptr);
    ~RegisterDialog();

public:
    QString m_windowName;

signals:
    // 向主窗口发送转换窗口信号
    void transWindow(const QString&,const QString&);

private slots:
    void GetCaptchaBtn_clicked();

    void SignUpBtn_clicked();

    void SignInBtn_clicked();

    void BackBtn_clicked();

private:
    // 绘图事件
    void paintEvent(QPaintEvent *);
    // 重载关闭事件
    void closeEvent(QCloseEvent *);

private:
    Ui::RegisterDialog *ui;
};

#endif // REGISTERDIALOG_H

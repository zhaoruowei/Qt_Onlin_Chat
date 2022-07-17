#include "registerdialog.h"
#include "ui_registerdialog.h"
#include <QDebug>

RegisterDialog::RegisterDialog(int width, int height, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterDialog)
{
    m_windowName = "SignUp";

    this->setFixedSize(width, height);
    ui->setupUi(this);
    this->setMinimumSize(0, 0);
    this->setMaximumSize(1920, 1080);

    connect(ui->SignInBtn, SIGNAL(clicked()), this, SLOT(SignInBtn_clicked()));
    connect(ui->SignUpBtn, SIGNAL(clicked()), this, SLOT(SignUpBtn_clicked()));
    connect(ui->BackBtn, SIGNAL(clicked()), this, SLOT(BackBtn_clicked()));
    // 绑定切换窗口信号槽函数
    connect(this, SIGNAL(transWindow(QString,QString)), this->parent(), SLOT(TransWindow_emited(QString,QString)));
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}

// 获取验证码槽函数，点击获取验证码
void RegisterDialog::GetCaptchaBtn_clicked()
{

}

// 注册按钮槽函数，点击发送注册请求
void RegisterDialog::SignUpBtn_clicked()
{

}

// 登录按钮槽函数，点击跳转登录窗口
void RegisterDialog::SignInBtn_clicked()
{
    emit transWindow(m_windowName, "SignIn");
}

void RegisterDialog::BackBtn_clicked()
{
    emit transWindow(m_windowName, "Main");
}

// 重写绘图事件，显示注册页图片
void RegisterDialog::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QRect rect = ui->frame->frameRect();
    rect.translate(ui->frame->pos());
    QImage logo(":/qmullogo.png");
    ui->frame->setFixedSize(logo.size()*.5);
    painter.drawImage(rect, logo);
}

// 重载关闭事件
void RegisterDialog::closeEvent(QCloseEvent *)
{
    delete this;
    qDebug() << m_windowName + "Closed";
}



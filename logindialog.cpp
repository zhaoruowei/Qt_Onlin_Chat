#include "logindialog.h"
#include "ui_logindialog.h"
#include <QDebug>

LoginDialog::LoginDialog(int width, int height, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    m_windowName = "SignIn";

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

LoginDialog::~LoginDialog()
{
    delete ui;
}

// 点击发送登录请求
void LoginDialog::SignInBtn_clicked()
{

}

// 点击向主窗口发送窗口转换信号，转换注册窗口
void LoginDialog::SignUpBtn_clicked()
{
    emit transWindow(m_windowName, "SignUp");
}

// 点击向主窗口发送窗口转换信号，退回主窗口
void LoginDialog::BackBtn_clicked()
{
    emit transWindow(m_windowName, "Main");
}

// 重写绘图虚函数，展示登录窗口Logo
void LoginDialog::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QRect rect = ui->frame->frameRect();
    rect.translate(ui->frame->pos());
    QImage logo(":/qmullogo.png");
    ui->frame->setFixedSize(logo.size()*.3);
    painter.drawImage(rect, logo);

}

// 重载关闭事件
void LoginDialog::closeEvent(QCloseEvent *)
{
    delete this;
    qDebug() << m_windowName + "Closed";
}



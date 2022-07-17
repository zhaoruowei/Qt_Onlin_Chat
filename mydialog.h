#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QWidget>
/*
    适配不同平台可用窗口大小，根据可用屏幕大小调整窗口大小。
*/
class MyDialog : public QWidget
{
    Q_OBJECT
public:
    // 定义自适应窗口大小构造函数
    MyDialog(int width, int height, QWidget *parent = nullptr);

signals:



public:
    int m_width;
    int m_height;
};

#endif // MYDIALOG_H

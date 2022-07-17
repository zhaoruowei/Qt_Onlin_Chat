#include "mydialog.h"

MyDialog::MyDialog(int width, int height, QWidget *parent)
    : QWidget{parent}
{
    m_width = width;
    m_height = height;
    this->setFixedSize(m_width, m_height);
    this->setMinimumSize(0, 0);
    this->setMaximumSize(1920, 1080);
}

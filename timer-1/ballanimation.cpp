#include "ballanimation.h"
#include <QDebug>
#include <QPaintEvent>
#include <QPainter>

Ballanimation::Ballanimation(QWidget *parent) : QWidget(parent)
{
    setGeometry(0,0,100,100);
}

void Ballanimation::setOrigin()
{

}

void Ballanimation::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawEllipse(QPoint(50,50),25,25);

}

#include "ballanimation.h"
#include <QDebug>
#include <QPaintEvent>
#include <QPainter>

Ballanimation::Ballanimation(QWidget *parent) :
    QWidget(parent),
    m_origin(QPoint(0,0))
{
    setFixedSize(100,100);
}

void Ballanimation::setOrigin(const QPoint &origin)
{
    m_origin = origin;
    //e_origin = m_origin;
}

void Ballanimation::addToOrigin(const QPoint &origin)
{
    m_origin += origin;
}

void Ballanimation::bounce()
{
    if(m_origin.rx() >= 100 || m_origin.ry() >= 100)
    {
        int count = 0;
        if(count < 100)
        {
            m_origin.rx()--;
            m_origin.ry()--;
            count++;
        }

    }
}

void Ballanimation::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setPen(Qt::red);
    painter.drawRect(QRect(0,0,width()-1,height()-1));
    painter.setBrush(Qt::blue);
    painter.setPen(Qt::red);
    painter.drawEllipse(m_origin,5,5);
}

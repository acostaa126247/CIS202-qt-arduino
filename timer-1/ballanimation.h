#ifndef BALLANIMATION_H
#define BALLANIMATION_H

#include <QWidget>

class Ballanimation : public QWidget
{
    Q_OBJECT

public:
    Ballanimation(QWidget *parent = nullptr);
    void setOrigin(const QPoint &origin);
    void addToOrigin(const QPoint &origin);
signals:

public slots:
    void paintEvent(QPaintEvent *event);

private:
    QPoint m_origin;

};

#endif // BALLANIMATION_H

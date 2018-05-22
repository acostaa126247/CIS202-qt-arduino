#ifndef BALLANIMATION_H
#define BALLANIMATION_H

#include <QWidget>

class Ballanimation : public QWidget
{
public:
    Ballanimation();
    void setOrigin(const QPoint &origin);

};

#endif // BALLANIMATION_H

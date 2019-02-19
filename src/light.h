#ifndef LIGHT_H
#define LIGHT_H

#include<QDateTime>


class Light
{
private:
    QDateTime timeOn;
    QDateTime timeOff;

public:
    Light();

    // setters
    void setTimeOn(QDateTime time);
    void setTimeOff(QDateTime time);

    // getters
    QDateTime getTimeOn() {return timeOn;}
    QDateTime getTimeOff() {return timeOff;}
};

#endif // LIGHT_H

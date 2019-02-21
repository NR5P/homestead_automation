#ifndef LIGHT_H
#define LIGHT_H

#include<QDateTime>

#include "tool.h"


class Light : Tool
{
private:
    QDateTime timeOn;
    QDateTime timeOff;

    bool on;

public:
    Light();
    ~Light(){}

    // setters
    void setTimeOn(QDateTime time);
    void setTimeOff(QDateTime time);

    // getters
    QDateTime getTimeOn() {return timeOn;}
    QDateTime getTimeOff() {return timeOff;}

    virtual void run();
    virtual bool isOn();
};

#endif // LIGHT_H

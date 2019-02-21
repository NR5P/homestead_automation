#ifndef HUMIDIFIER_H
#define HUMIDIFIER_H

#include "tool.h"


class Humidifier : Tool
{
private:
    int humidityDesired;
    int humidityNow;
    bool on;

public:
    Humidifier();
    ~Humidifier(){}

    // setters
    void setHumidityDesired(int humidity);
    void setHumidityNow(int humidity);

    // getters
    int getHumidityDesired() {return humidityDesired;}
    int getHumidityNow() {return humidityNow;}

    virtual void run();
    virtual bool isOn();
};

#endif // HUMIDIFIER_H

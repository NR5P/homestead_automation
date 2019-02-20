#ifndef HUMIDIFIER_H
#define HUMIDIFIER_H

#include "tool.h"


class Humidifier : Tool
{
private:
    int humidityDesired;
    int humidityNow;

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
};

#endif // HUMIDIFIER_H

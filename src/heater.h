#ifndef HEATER_H
#define HEATER_H

#include "tool.h"


class Heater : Tool
{
private:
    char fahrenOrCelc;
    bool on;
    float tempDesired;
    float tempNow;

public:
    Heater();
    ~Heater(){}

    // setters
    void setFahrenOrCelc(char tempType);
    void setTempDesired(float temp);
    void setTempNow(float temp);

    // getters
    char getFahrenOrCelc() const {return fahrenOrCelc;}
    float getTempDesired() const {return tempDesired;}
    float getTempNow() const {return tempNow;}

    virtual void run();
    virtual bool isOn();
};

#endif // HEATER_H

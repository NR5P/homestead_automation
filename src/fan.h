#ifndef FAN_H
#define FAN_H

#include "tool.h"


class Fan : Tool
{
private:
    char fahrenOrCelc;
    bool on;
    float tempNow;
    float tempDesired;

public:
    Fan();
    ~Fan() {}

    // setters
    void setFahrenOrCelc(char degType);
    void setTempNow(float temp);
    void setTempDesired(float temp);

    // getters
    char getFahrenOrCelc() {return this->fahrenOrCelc;}
    float getTempNow() {return this->tempNow;}
    float getTempDesired() {return this->tempDesired;}

    virtual void run();
    virtual bool isOn();
};

#endif // FAN_H

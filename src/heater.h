#ifndef HEATER_H
#define HEATER_H


class Heater
{
private:
    char fahrenOrCelc;
    float tempDesired;
    float tempNow;

public:
    Heater();

    // setters
    void setFahrenOrCelc(char tempType);
    void setTempDesired(float temp);
    void setTempNow(float temp);

    // getters
    char getFahrenOrCelc() const {return fahrenOrCelc;}
    float getTempDesired() const {return tempDesired;}
    float getTempNow() const {return tempNow;}
};

#endif // HEATER_H

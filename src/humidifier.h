#ifndef HUMIDIFIER_H
#define HUMIDIFIER_H


class Humidifier
{
private:
    int humidityDesired;
    int humidityNow;

public:
    Humidifier();

    // setters
    void setHumidityDesired(int humidity);

    // getters
    int getHumidityNow() {return humidityNow;}
};

#endif // HUMIDIFIER_H

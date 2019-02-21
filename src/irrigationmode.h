#ifndef IRRIGATIONMODE_H
#define IRRIGATIONMODE_H

#include<QDateTime>
#include<QVector>
#include<QMap>

#include "tool.h"


class IrrigationMode : Tool
{
private:
    QMap<QDateTime, QDateTime> timesOnOff; // times on and off
    QVector<QDateTime> days;

    bool on;

public:
    IrrigationMode();
    ~IrrigationMode(){}

    // setters
    void setTimesOnOff(QMap<QDateTime, QDateTime>);
    void setDays(QVector<QDateTime> days);

    // getters
    QVector<QDateTime> getDays() {return this->days;}

    virtual void run();
    virtual bool isOn();
};

#endif // IRRIGATIONMODE_H

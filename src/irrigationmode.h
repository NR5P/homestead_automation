#ifndef IRRIGATIONMODE_H
#define IRRIGATIONMODE_H

#include<QDateTime>
#include<QMap>


class IrrigationMode
{
private:
    QMap<QDateTime, QDateTime> timesOnOff; // times on and off

public:
    IrrigationMode();

    // setters
    void setTimesOnOff(QMap<QDateTime, QDateTime>);
};

#endif // IRRIGATIONMODE_H

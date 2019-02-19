#ifndef IRRIGATIONVALVE_H
#define IRRIGATIONVALVE_H

#include<QDate>
#include<QVector>

class IrrigationValve
{
private:
    bool cycleOrIrrigate;
    QVector<QDate> days;

public:
    IrrigationValve();

    // setters
    void setDays(QDate);
};

#endif // IRRIGATIONVALVE_H

#ifndef CYCLEIRRIGATION_H
#define CYCLEIRRIGATION_H

#include<QTime>
#include<QMap>

#include "tool.h"


class CycleMode : Tool
{
private:
    QMap<QTime, QTime> cycleOnOffTimes;
    QTime blackoutStartTime;
    QTime blackoutStopTime;

    bool on;

public:
    CycleMode();
    ~CycleMode(){}

    // setters
    void setBlackoutStartTime(QTime blackoutStartTime) {this->blackoutStartTime = blackoutStartTime;}
    void setBlackoutStopTime(QTime blackoutStopTime) {this->blackoutStopTime = blackoutStopTime;}
    void setCycleOnOffTimes(QTime cycleOn, QTime cycleOff);

    // getters
    QMap<QTime, QTime> getCycleOnOffTimes() {return cycleOnOffTimes;}
    QTime getBackoutStartTime() {return this->blackoutStartTime;}
    QTime getBackoutStopTime() {return this->blackoutStopTime;}

    virtual void run();
    virtual bool isOn();
};

#endif // CYCLEIRRIGATION_H

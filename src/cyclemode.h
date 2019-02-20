#ifndef CYCLEIRRIGATION_H
#define CYCLEIRRIGATION_H

#include<QDateTime>
#include<QMap>

#include "tool.h"


class CycleMode : Tool
{
private:
    QMap<QDateTime, QDateTime> cycleOnOffTimes;
    QDateTime blackoutStartTime;
    QDateTime blackoutStopTime;


public:
    CycleMode();
    ~CycleMode(){}

    // setters
    void setBlackoutStartTime(QDateTime blackoutStartTime) {this->blackoutStartTime = blackoutStartTime;}
    void setBlackoutStopTime(QDateTime blackoutStopTime) {this->blackoutStopTime = blackoutStopTime;}
    void setCycleOnOffTimes(QDateTime, QDateTime);

    // getters
    QMap<QDateTime, QDateTime> getCycleOnOffTimes() {return cycleOnOffTimes;}
    QDateTime getBackoutStartTime() {return this->blackoutStartTime;}
    QDateTime getBackoutStopTime() {return this->blackoutStopTime;}

    virtual void run();
};

#endif // CYCLEIRRIGATION_H

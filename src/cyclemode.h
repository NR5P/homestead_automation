#ifndef CYCLEIRRIGATION_H
#define CYCLEIRRIGATION_H

#include<QDateTime>
#include<QMap>


class CycleMode
{
private:
    QMap<QDateTime, QDateTime> cycleOnOffTimes;
    QDateTime blackoutStartTime;
    QDateTime blackoutStopTime;


public:
    CycleMode();

    // setters
    void setBlackoutStartTime(QDateTime blackoutStartTime) {this->blackoutStartTime = blackoutStartTime;}
    void setBlackoutStopTime(QDateTime blackoutStopTime) {this->blackoutStopTime = blackoutStopTime;}
    void setCycleOnOffTimes(QDateTime, QDateTime);
};

#endif // CYCLEIRRIGATION_H

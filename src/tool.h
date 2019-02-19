#ifndef TOOL_H
#define TOOL_H

#include <QString>
#include <QDateTime>
#include <QMap>

class Tool
{

private:
    QString name; // name of timer object: valve, heater, etc.
    QString notes;
    int pinNumber; // raspberry pi pin number
    bool on; // is the timer object on or off?
    bool test; // true if in test mode
    bool currentState; // true if current state is running (right now). off if not.

public:
    Tool();

    void save() const;
};

#endif // TIMER_H

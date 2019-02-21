/*******************************************************************************************
 * This is base class for all other components in the system.
 *******************************************************************************************/


#ifndef TOOL_H
#define TOOL_H

#include <QString>
#include <QDateTime>
#include <QMap>
#include <QVector>

class Tool
{

private:
    static int numTools; // keeps track of the number of components being used
    QVector<Tool*> systemComponentTools; // tools (valves, lights, etc. being used

    QString name; // name of timer object: valve, heater, etc.
    QString notes; // for notes about each component
    int pinNumber; // raspberry pi pin number
    bool on; // is the timer object on or off?
    bool test; // true if in test mode
    bool currentState; // true if current state is running (right now). off if not.

public:
    Tool();
    virtual ~Tool();

    void save() const;
    virtual void run();
    virtual bool isOn();

    // getters
};

#endif // TIMER_H

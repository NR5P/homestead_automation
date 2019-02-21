#include "cyclemode.h"

CycleMode::CycleMode()
{

}

void CycleMode::setCycleOnOffTimes(QTime cycleOn, QTime cycleOff)
{

}

/***************************************************************
 * called by the parents run method.
 * checks timers and turns power to the valve on or off depending
 * on time
 * *************************************************************/
void CycleMode::run()
{

}

bool CycleMode::isOn()
{
    return this->on;
}

#include "irrigationmode.h"

IrrigationMode::IrrigationMode()
{

}

void IrrigationMode::setTimesOnOff(QMap<QDateTime,QDateTime>)
{

}

void IrrigationMode::setDays(QVector<QDateTime> days)
{

}

/***************************************************************
 * called by the parents run method. turns irrigation valve on
 * or off depending on settings
 * *************************************************************/
void IrrigationMode::run()
{

}

bool IrrigationMode::isOn()
{
    return this->on;
}

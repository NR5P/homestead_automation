#include "tool.h"

Tool::Tool()
    : pinNumber{0}, on{false}, test{false}, currentState{false}
{

}

Tool::~Tool()
{

}

void Tool::save() const
{

}

/***************************************************************
 * itterates through vector of system components and calls their
 * own run methods on them.
 * *************************************************************/
void Tool::run()
{
    for (auto tool : systemComponentTools)
    {
        if (on)
        {
            tool->run();
        }
    }
}

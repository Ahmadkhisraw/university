#include "bicycle.h"

Bicycle::Bicycle() {}

Bicycle::Bicycle(double speed, const string &type, int numberOfTires) : AbstractTransport(speed, type), numberOfTires(numberOfTires)
{
}

int Bicycle::getNumberOfTires() const
{
    return numberOfTires;
}

void Bicycle::setNumberOfTires(int newNumberOfTires)
{
    numberOfTires = newNumberOfTires;
}


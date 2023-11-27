#include "abstracttransport.h"

AbstractTransport::AbstractTransport() {}

AbstractTransport::AbstractTransport(double speed, const string &type) : speed(speed),
    type(type)
{}

double AbstractTransport::getSpeed() const
{
    return speed;
}

void AbstractTransport::setSpeed(double newSpeed)
{
    speed = newSpeed;
}

string AbstractTransport::getType() const
{
    return type;
}

void AbstractTransport::setType(const string &newType)
{
    type = newType;
}

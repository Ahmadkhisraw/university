#ifndef BICYCLE_H
#define BICYCLE_H

#include "abstracttransport.h"

class Bicycle : public AbstractTransport
{
public:
    Bicycle();
    Bicycle(double speed, const string &type, int numberOfTires);

    int getNumberOfTires() const;
    void setNumberOfTires(int newNumberOfTires);

private:
    int numberOfTires;
};

#endif // BICYCLE_H

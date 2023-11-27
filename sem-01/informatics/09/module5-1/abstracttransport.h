#ifndef ABSTRACTTRANSPORT_H
#define ABSTRACTTRANSPORT_H

#include <string>

using std::string;

class AbstractTransport
{
public:
    AbstractTransport();
    AbstractTransport(double speed, const string &type);

    double getSpeed() const;
    void setSpeed(double newSpeed);
    string getType() const;
    void setType(const string &newType);

private:
    double speed;
    string type;
};

#endif // ABSTRACTTRANSPORT_H

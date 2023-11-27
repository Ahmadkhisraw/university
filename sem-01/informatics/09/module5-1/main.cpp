#include <iostream>

#include "abstracttransport.h"
#include "car.h"
#include "bicycle.h"

using namespace std;

int main()
{
    AbstractTransport toyota(220.0, "corolla");
    cout << toyota.getType() << endl;
    cout << toyota.getSpeed() << endl;
    toyota.setSpeed(100.0);
    cout << toyota.getSpeed() << endl;
    AbstractTransport forunner(340.0, "corolla");
    cout << forunner.getType() << endl;
    cout << forunner.getSpeed() << endl;

    Car newCar(220, "raw4", "Benz", 1999);

    cout << newCar.getModel() << endl;
    cout << newCar.getProductionYear() << endl;
    cout << newCar.getType() << endl;
    cout << newCar.getSpeed() << endl;

    Bicycle newBicycle(100, "Normal", 3);
    cout << newBicycle.getNumberOfTires() << endl;
    cout << newBicycle.getType() << endl;
    cout << newBicycle.getSpeed() << endl;
    return 0;
}

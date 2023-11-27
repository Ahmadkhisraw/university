#ifndef CAR_H
#define CAR_H

#include "abstracttransport.h"

class Car : public AbstractTransport
{
public:
    Car();
    Car(double speed, const string &type, const string &model, int productionYear);

    string getModel() const;
    void setModel(const string &newModel);
    int getProductionYear() const;
    void setProductionYear(int newProductionYear);

private:
    string model;
    int productionYear;
};

#endif // CAR_H

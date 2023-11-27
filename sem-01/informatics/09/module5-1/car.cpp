#include "car.h"

Car::Car() {}

Car::Car(double speed, const string &type, const string &model, int productionYear) : AbstractTransport(speed, type), model(model),
    productionYear(productionYear)
{}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getProductionYear() const
{
    return productionYear;
}

void Car::setProductionYear(int newProductionYear)
{
    productionYear = newProductionYear;
}

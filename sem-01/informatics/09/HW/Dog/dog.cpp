#include "dog.h"

#include <iostream>


std::string Dog::getName() const
{
    return name;
}

void Dog::setName(const std::string &newName)
{
    name = newName;
}

unsigned int Dog::getAge() const
{
    return age;
}

void Dog::setAge(unsigned int newAge)
{
    age = newAge;
}

void Dog::printInfoToScreen()
{
    std::cout << "name: " << getName() << "\n" << "age: " << getAge() << std::endl;
}

Dog::Dog(const std::string &name, unsigned int age) : name(name),
    age(age)
{}

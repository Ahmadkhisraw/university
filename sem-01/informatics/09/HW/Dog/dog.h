#ifndef DOG_H
#define DOG_H

#include <string>

class Dog
{
public:
    Dog(const std::string &name, unsigned int age);

    std::string getName() const;
    void setName(const std::string &newName);
    unsigned int getAge() const;
    void setAge(unsigned int newAge);
    void printInfoToScreen();
private:
    std::string name;
    unsigned int age;
};

#endif // DOG_H

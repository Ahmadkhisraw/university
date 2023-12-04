#include <iostream>

#include "dog.h"
#include <vector>

int main()
{
    std::vector<Dog> dogs;

    dogs.push_back(Dog("Alice", 2));
    dogs.push_back(Dog("Max", 3));
    dogs.push_back(Dog("Tiger", 5));

    for (auto dog : dogs) {
        dog.printInfoToScreen();
    }
    return 0;
}

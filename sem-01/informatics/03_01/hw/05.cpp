#include <iostream>

int main() {
    double meters;
    std::cout << "Enter distance in meters: ";
    std::cin >> meters;

    double kilometers = meters / 1000.0;

    std::cout << "Distance in kilometers: " << kilometers << std::endl;

    return 0;
}

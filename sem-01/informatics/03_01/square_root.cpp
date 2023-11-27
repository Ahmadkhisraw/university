#include <iostream>
#include <cmath>

int main() {
    double number;

    std::cout << "Введите число: ";
    std::cin >> number;

    auto number_root = std::sqrt(number);

    std::cout << "square root: " << number_root << std::endl;

    return 0;
}
#include <iostream>

int main() {
    double num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    double sum = num1 + num2;

    std::cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0;
}

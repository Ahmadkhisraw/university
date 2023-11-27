#include <iostream>

int main() {
    double a, b;

    std::cout << "Введите значение a: ";
    std::cin >> a;

    std::cout << "Введите значение b: ";
    std::cin >> b;

    if (a != 0) {
        double x = -b / a;

        std::cout << "Решение уравнения " << a << "x + " << b << " = 0: x = " << x << std::endl;
    } else {
        std::cout << "Уравнение не имеет решения, так как a = 0." << std::endl;
    }

    return 0;
}
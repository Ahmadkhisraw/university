#include <iostream>

int main() {
    int num;

    std::cout << "Введите число для вычисления факториала: ";
    std::cin >> num;

    int factorial = 1;

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    std::cout << "Факториал числа " << num << " равен " << factorial << std::endl;

    return 0;
}

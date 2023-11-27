#include <iostream>

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int number;

    std::cout << "Введите число для проверки на простоту: ";
    std::cin >> number;

    if (isPrime(number)) {
        std::cout << number << " - простое число." << std::endl;
    } else {
        std::cout << number << " - не простое число." << std::endl;
    }

    return 0;
}

#include <iostream>
#include <string>

int main() {
    std::string input_string;

    std::cout << "Введите строку: ";
    std::getline(std::cin, input_string);

    // Отражение строки
    std::string reversed_string = "";
    for (int i = input_string.length() - 1; i >= 0; i--) {
        reversed_string += input_string[i];
    }

    std::cout << "Отраженная строка: " << reversed_string << std::endl;

    return 0;
}

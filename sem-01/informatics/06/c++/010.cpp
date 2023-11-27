#include <iostream>
#include <string>
#include <cctype>

int countVowels(const std::string& str) {
    int vowel_count = 0;

    for (char ch : str) {
        char lowercase_ch = std::tolower(ch);
        if (lowercase_ch == 'a' || lowercase_ch == 'e' || lowercase_ch == 'i' || lowercase_ch == 'o' || lowercase_ch == 'u') {
            vowel_count++;
        }
    }

    return vowel_count;
}

int main() {
    std::string input_string;

    std::cout << "Введите строку: ";
    std::getline(std::cin, input_string);

    int vowels_count = countVowels(input_string);

    std::cout << "Количество гласных в строке: " << vowels_count << std::endl;

    return 0;
}

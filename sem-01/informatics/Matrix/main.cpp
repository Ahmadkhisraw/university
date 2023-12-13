#include <iostream>

#include "matrix.h"

int main()
{
    Matrix matrix1(3, 3);
    std::cout << matrix1 << std::endl;


    std::vector<std::vector<int>> data = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Matrix matrix2(data);
    std::cout << matrix2 << std::endl;

    try {
        Matrix sum = matrix1 + matrix2;
        std::cout << "Sum:" << std::endl << sum;

        Matrix difference = matrix1 - matrix2;
        std::cout << "Difference:" << std::endl << difference;

        Matrix product = matrix2 * 2;
        std::cout << "Product:" << std::endl << product;
    } catch (const std::invalid_argument& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}

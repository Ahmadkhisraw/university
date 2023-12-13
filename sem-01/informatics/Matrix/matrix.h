#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>
#include <stdexcept>

class Matrix {
private:
    std::vector<std::vector<int>> data;
    size_t rows;
    size_t cols;

public:
    Matrix(size_t rows, size_t cols);
    Matrix(const std::vector<std::vector<int>>& inputMatrix);
    Matrix operator+(const Matrix& other) const;
    Matrix operator-(const Matrix& other) const;

    Matrix operator*(int scalar) const;

    friend std::ostream& operator<<(std::ostream& os, const Matrix& matrix);
};


#endif // MATRIX_H

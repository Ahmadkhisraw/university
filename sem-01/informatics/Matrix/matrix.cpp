#include "matrix.h"

Matrix::Matrix(size_t rows, size_t cols) : rows(rows), cols(cols) {
    data.resize(rows, std::vector<int>(cols, 0));
}

Matrix::Matrix(const std::vector<std::vector<int>>& inputMatrix) {
    if (inputMatrix.empty() || inputMatrix[0].empty()) {
        throw std::invalid_argument("Input matrix is empty.");
    }

    rows = inputMatrix.size();
    cols = inputMatrix[0].size();
    data = inputMatrix;
}

Matrix Matrix::operator+(const Matrix& other) const {
    if (rows != other.rows || cols != other.cols) {
        throw std::invalid_argument("Matrix dimensions do not match for addition.");
    }

    Matrix result(rows, cols);

    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            result.data[i][j] = data[i][j] + other.data[i][j];
        }
    }

    return result;
}

Matrix Matrix::operator-(const Matrix& other) const {
    if (rows != other.rows || cols != other.cols) {
        throw std::invalid_argument("Matrix dimensions do not match for subtraction.");
    }

    Matrix result(rows, cols);

    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            result.data[i][j] = data[i][j] - other.data[i][j];
        }
    }

    return result;
}

Matrix Matrix::operator*(int scalar) const {
    Matrix result(rows, cols);

    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            result.data[i][j] = data[i][j] * scalar;
        }
    }

    return result;
}

std::ostream& operator<<(std::ostream& os, const Matrix& matrix) {
    for (size_t i = 0; i < matrix.rows; ++i) {
        for (size_t j = 0; j < matrix.cols; ++j) {
            os << matrix.data[i][j] << " ";
        }
        os << std::endl;
    }
    return os;
}

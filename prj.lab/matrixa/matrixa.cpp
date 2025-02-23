#include <matrixa/matrixa.hpp>
#include <iostream>
#include <cstring>
#include <stdexcept>
#include <algorithm>

MatrixA::MatrixA(std::ptrdiff_t rows, std::ptrdiff_t columns)
    : n_rows_(rows)
    , n_cols_(columns) {
    if (rows <= 0 || columns <= 0) {
        throw std::invalid_argument("MatrixA::MatrixA - size must be positive");
    }
    data_ = new double[rows * columns]{0.0};
}

MatrixA::MatrixA(const MatrixA& src)
    : n_rows_(src.n_rows_)
    , n_cols_(src.n_cols_)
    , data_(new double[src.n_rows_ * src.n_cols_]) {
    std::memcpy(data_, src.data_, n_rows_ * n_cols_ * sizeof(*data_));
}

MatrixA& MatrixA::operator=(const MatrixA& src) {
    if (this != &src) {
        double* data = new double[src.n_rows_ * src.n_cols_];
        std::memcpy(data, src.data_, src.n_rows_ * src.n_cols_ * sizeof(*src.data_));
        delete[] data_;
        data_ = data;
        n_rows_ = src.n_rows_;
        n_cols_ = src.n_cols_;
    }
    return *this;
}

MatrixA::~MatrixA() {
    delete[] data_;
}

double& MatrixA::At(const std::ptrdiff_t i_row, const std::ptrdiff_t i_col) {
    if (i_row < 0 || i_col < 0 || i_row >= n_rows_ || i_col >= n_cols_) {
        throw std::out_of_range("MatrixA::At - index out of range");
    }
    return data_[i_row * n_cols_ + i_col];
}

double MatrixA::At(const std::ptrdiff_t i_row, const std::ptrdiff_t i_col) const {
    if (i_row < 0 || i_col < 0 || i_row >= n_rows_ || i_col >= n_cols_) {
        throw std::out_of_range("MatrixA::At - index out of range");
    }
    return data_[i_row * n_cols_ + i_col];
}

void MatrixA::PrintMatrix() const noexcept {
    for (std::ptrdiff_t i = 0; i < n_rows_; ++i) {
        for (std::ptrdiff_t j = 0; j < n_cols_; ++j) {
            std::cout << data_[i * n_cols_ + j] << " ";
        }
        std::cout << std::endl;
    }
}

void MatrixA::Resize(const std::ptrdiff_t rows, const std::ptrdiff_t cols) {
    if (rows <= 0 || cols <= 0) {
        throw std::invalid_argument("MatrixA::Resize - sizes must be positive");
    }
    
    double* data = new double[rows * cols]{0.0};
    
    std::ptrdiff_t min_rows = std::min(rows, n_rows_);
    std::ptrdiff_t min_cols = std::min(cols, n_cols_);
    
    for (std::ptrdiff_t i = 0; i < min_rows; ++i) {
        for (std::ptrdiff_t j = 0; j < min_cols; ++j) {
            data[i * cols + j] = data_[i * n_cols_ + j];
        }
    }
    std::swap(data_, data);
    delete[] data;
    n_rows_ = rows;
    n_cols_ = cols;
}

// int main() {
//     MatrixA matrix1(3, 3);
//     MatrixA matrix2(3, 4);
//     for (std::ptrdiff_t i = 0; i < matrix1.GetRows(); ++i) {
//         for (std::ptrdiff_t j = 0; j < matrix1.GetColumns(); ++j) {
//             matrix1.At(i, j) = i * matrix1.GetColumns() + j;
//         }
//     }
//     for (std::ptrdiff_t i = 0; i < matrix2.GetRows(); ++i) {
//         for (std::ptrdiff_t j = 0; j < matrix2.GetColumns(); ++j) {
//             matrix2.At(i, j) = i * matrix2.GetColumns() + j;
//         }
//     }

//     matrix1.PrintMatrix();
//     std::cout << std::endl;

//     matrix2.PrintMatrix();
//     std::cout << std::endl;

//     matrix1 = matrix2;
//     matrix1.PrintMatrix();
//     std::cout << std::endl;

//     MatrixA matrix3 = matrix1;
//     matrix3.PrintMatrix();
//     std::cout << std::endl;

//     std::cout << matrix3.GetRows() << std::endl << matrix3.GetColumns() << std::endl << std::endl;

//     matrix3.Resize(2, 2);
//     matrix3.PrintMatrix();
//     std::cout << std::endl;

//     matrix3.Resize(6, 6);
//     matrix3.PrintMatrix();
//     std::cout << std::endl;
// }

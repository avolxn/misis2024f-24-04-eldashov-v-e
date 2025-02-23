#ifndef MATRIXA_MATRIXA_HPP
#define MATRIXA_MATRIXA_HPP

#include <cstddef>

class MatrixA {
public:
    MatrixA() = default;
    MatrixA(std::ptrdiff_t rows, std::ptrdiff_t columns);
    MatrixA(const MatrixA& src);
    MatrixA& operator=(const MatrixA& src);
    ~MatrixA();

    double& At(const std::ptrdiff_t i_row, const std::ptrdiff_t i_col);
    double At(const std::ptrdiff_t i_row, const std::ptrdiff_t i_col) const;

    std::ptrdiff_t GetRows() const noexcept { return n_rows_; }
    std::ptrdiff_t GetColumns() const noexcept { return n_cols_; }
    void PrintMatrix() const noexcept;

    void Resize(const std::ptrdiff_t rows, const std::ptrdiff_t cols);
    
private:
    std::ptrdiff_t n_rows_{0};
    std::ptrdiff_t n_cols_{0};
    double* data_{nullptr};
};

#endif
#pragma once
#ifndef ARRAYD_ARRAYD_HPP
#define ARRAYD_ARRAYD_HPP

#include <cstddef>

class ArrayD {
public:
	ArrayD() = default;
	ArrayD(const ArrayD&);
	ArrayD(const std::ptrdiff_t size);
	~ArrayD();
	ArrayD& operator=(const ArrayD&);

	[[nodiscard]] std::ptrdiff_t Size() const noexcept { return size_; }
	[[nodiscard]] double& operator[](const std::ptrdiff_t idx);
	[[nodiscard]] double operator[](const std::ptrdiff_t idx) const;

	void Resize(const std::ptrdiff_t size);
	void Insert(const std::ptrdiff_t idx, const double val);
	void Remove(const std::ptrdiff_t idx);

private:
	std::ptrdiff_t capacity_ = 0;
	std::ptrdiff_t size_ = 0;
	double* data_ = nullptr;
};

#endif
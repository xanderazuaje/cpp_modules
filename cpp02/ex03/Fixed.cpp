//
// Created by xander on 9/3/24.
//

#include "Fixed.hpp"

#include <iomanip>
#include <iostream>

// Orthodox class members:

Fixed::Fixed(): point_value(0){}
Fixed::Fixed(const Fixed &fixed): point_value(fixed.point_value){}
Fixed::~Fixed(){}
Fixed &Fixed::operator=(const Fixed &fixed)
{
	point_value = fixed.point_value;
	return *this;
}

// Other constructors;
Fixed::Fixed(const int val)
{
	point_value = val << fractional_bits;
}
Fixed::Fixed(const float val)
{
	point_value = static_cast<int>(val * (1 << fractional_bits));
}

// Methods
int Fixed::getRawBits() const
{
	return point_value;
}
void Fixed::setRawBits(const int raw)
{
	point_value = raw;
}
float Fixed::toFloat() const
{
	return static_cast<float>(point_value) / static_cast<float>(1 << fractional_bits);
}
int Fixed::toInt() const
{
	return point_value >> fractional_bits;
}

// Operators override
bool Fixed::operator>(const Fixed &fixed) const
{
	return this->point_value > fixed.point_value;
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return this->point_value < fixed.point_value;
}
bool Fixed::operator>=(const Fixed &fixed) const
{
	return this->point_value >= fixed.point_value;
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return this->point_value <= fixed.point_value;
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return this->point_value == fixed.point_value;
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return this->point_value != fixed.point_value;
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
	Fixed res;
	res.setRawBits(this->point_value + fixed.point_value);
	return res;
}
Fixed Fixed::operator-(const Fixed &fixed) const
{
	Fixed res;
	res.setRawBits(this->point_value - fixed.point_value);
	return res;
}
Fixed Fixed::operator*(const Fixed &fixed) const
{
	Fixed res;
	res.point_value = this->point_value * fixed.point_value >> fractional_bits;
	return res;
}
Fixed Fixed::operator/(const Fixed &fixed) const
{
	Fixed res;
	res.point_value = (this->point_value << fractional_bits) / fixed.point_value;
	return res;
}
Fixed &Fixed::operator++()
{
	point_value++;
	return *this;
}
Fixed Fixed::operator++(int)
{
	Fixed temp = Fixed(*this);
	point_value++;
	return temp;
}
Fixed &Fixed::operator--()
{
	point_value--;
	return *this;
}
Fixed Fixed::operator--(int)
{
	Fixed temp = Fixed(*this);
	point_value--;
	return temp;
}
std::ostream & operator<<(std::ostream &out, const Fixed &fixed)
{
	out.precision(10);
	out << fixed.toFloat();
	return out;
}

//Static methods
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return a > b ? a : b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return a < b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return a > b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return a < b ? a : b;
}

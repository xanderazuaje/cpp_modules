//
// Created by xander on 9/3/24.
//

#include "Fixed.hpp"

#include <iomanip>
#include <iostream>

Fixed::Fixed(): point_value(0){}

Fixed::Fixed(const int val)
{
	point_value = val << fractional_bits;
}

Fixed::Fixed(const float val)
{
	point_value = static_cast<int>(val * (1 << fractional_bits));
}

Fixed::Fixed(const Fixed &fixed): point_value(fixed.point_value){}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	point_value = fixed.point_value;
	return *this;
}

Fixed::~Fixed(){}

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

std::ostream & operator << (std::ostream &out, const Fixed &fixed)
{
	out.precision(10);
	out << fixed.toFloat();
	return out;
}

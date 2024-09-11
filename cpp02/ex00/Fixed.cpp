//
// Created by xander on 9/3/24.
//

#include "Fixed.hpp"

Fixed::Fixed(): point_value(0) { }

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

void Fixed::setRawBits(int raw)
{
	point_value = raw;
}

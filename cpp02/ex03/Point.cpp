//
// Created by xander on 9/10/24.
//

#include "Point.hpp"

// Orthodox class members:

Point::Point():x(0), y(0){}
Point::Point(const Point &point):x(point.x),y(point.y){}
Point::~Point(){}
Point &Point::operator=(const Point &point)
{
	x = point.get_x();
	y = point.get_y();
	return *this;
}

// Other constructor

Point::Point(const Fixed& x, const Fixed& y):x(x),y(y){}
Point::Point(const float x, const float y):x(Fixed(x)), y(Fixed(y)){}
Point::Point(const int x, const int y):x(Fixed(x)), y(Fixed(y)){}

const Fixed &Point::get_x() const
{
	return x;
}

const Fixed &Point::get_y() const
{
	return y;
}

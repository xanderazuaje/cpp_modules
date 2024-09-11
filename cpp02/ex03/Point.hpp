//
// Created by xander on 9/10/24.
//

#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point {
private:
	Fixed x;
	Fixed y;
public:
	Point();
	Point(const Fixed& x, const Fixed& y);
	Point(float x, float y);
	Point(int x, int y);
	Point(const Point &point);
	~Point();
	Point & operator = (const Point &point);
	const Fixed &get_x() const;
	const Fixed &get_y() const;
};

#endif //POINT_HPP

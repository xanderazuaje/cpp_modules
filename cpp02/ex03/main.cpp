#include <iostream>
#include "Point.hpp"

bool bsp( Point a, Point b, Point c, Point point);

int main( void ) {
	Point a(0, 0);
	Point b(10, 10);
	Point c(20, 0);
	Point p(5, 5);

	bsp(a, b, c, p);
	return 0;
}
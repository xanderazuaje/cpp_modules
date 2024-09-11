//
// Created by xander on 9/10/24.
//

#include <iostream>

#include "Point.hpp"

#define Ax a.get_x()
#define Bx b.get_x()
#define Cx c.get_x()
#define Px point.get_x()
#define Ay a.get_y()
#define By b.get_y()
#define Cy c.get_y()
#define Py point.get_y()


bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed denominator = (By - Ay) * (Cx - Ax) - (Bx - Ax) * (Cy - Ay);
	if (denominator == 0)
		return false;
	const Fixed w1 = (Ax * (Cy - Ay) + (Py - Ay) * (Cx - Ax) - Px * (Cy - Ay)) / denominator;
	denominator = Cy - Ay;
	if (denominator == 0)
		return false;
	const Fixed w2 = (Py - Ay - w1 * (By - Ay)) / denominator;
	if (w1 >= 0 && w2 >= 0 && w1 + w2 <= 1)
	{
		return true;
	}
	return true;
}

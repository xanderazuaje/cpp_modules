//
// Created by xander on 9/3/24.
//

#ifndef FIXED_HPP
#define FIXED_HPP
#include <ostream>
#include <cmath>


class Fixed {
private:
	int point_value;
	static const int fractional_bits = 8;
public:
	Fixed();
	Fixed(int val);
	Fixed(float val);
	Fixed(const Fixed &fixed);
	~Fixed();

	int getRawBits() const;
	void setRawBits(int raw);
	float toFloat() const;

	int toInt() const;

	Fixed & operator = (const Fixed &fixed);
};

std::ostream & operator << (std::ostream &out, const Fixed &fixed);

#endif //FIXED_HPP

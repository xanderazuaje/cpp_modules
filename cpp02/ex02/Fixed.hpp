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

	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);

	int getRawBits() const;
	void setRawBits(int raw);
	float toFloat() const;

	int toInt() const;

	Fixed & operator = (const Fixed &fixed);
	bool operator >  (const Fixed &fixed) const;
	bool operator <  (const Fixed &fixed) const;
	bool operator >= (const Fixed &fixed) const;
	bool operator <= (const Fixed &fixed) const;
	bool operator == (const Fixed &fixed) const;
	bool operator != (const Fixed &fixed) const;
	Fixed operator + (const Fixed &fixed) const;
	Fixed operator - (const Fixed &fixed) const;
	Fixed operator * (const Fixed &fixed) const;
	Fixed operator / (const Fixed &fixed) const;
	Fixed & operator ++ ();
	Fixed operator ++ (int);
	Fixed & operator -- ();
	Fixed operator -- (int);
};

std::ostream & operator << (std::ostream &out, const Fixed &fixed);

#endif //FIXED_HPP

//
// Created by xander on 9/3/24.
//

#ifndef FIXED_HPP
#define FIXED_HPP



class Fixed {
private:
	int point_value;
	static const int fractional_bits = 8;
public:
	Fixed();
	Fixed(const Fixed &fixed);
	~Fixed();
	Fixed & operator = (const Fixed &fixed);
	int getRawBits() const;
	void setRawBits(int raw);
};



#endif //FIXED_HPP

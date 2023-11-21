#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
	private:
		int value;
		static const int bits;
	public:
		Fixed(void);
		Fixed(const Fixed &number);
		Fixed(const int int_nb);
		Fixed(const float fract_nb);
		Fixed &operator=(const Fixed &original);
		~Fixed(void);
		int getRawBits(void)const;
		void setRawBits(const int raw);
		float toFloat(void)const;
		int toInt(void)const;
};

std::ostream &operator<<(std::ostream &op, const Fixed &original);

#endif
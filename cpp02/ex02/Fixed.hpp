#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
	private:
		int value;
		static const int bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &number);
		Fixed(const int int_nb);
		Fixed(const float fract_nb);
		Fixed &operator=(const Fixed &number);
		~Fixed(void);
		int getRawBits(void)const;
		void setRawBits(const int raw);
		float toFloat(void)const;
		int toInt(void)const;
		bool operator>(const Fixed &number);
		bool operator<(const Fixed &number);
		bool operator>=(const Fixed &number);
		bool operator<=(const Fixed &number);
		bool operator==(const Fixed &number);
		bool operator!=(const Fixed &number);
		Fixed operator+(const Fixed &number);
		Fixed operator-(const Fixed &number);
		Fixed operator*(const Fixed &number);
		Fixed operator/(const Fixed &number);
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);
		Fixed static &min(Fixed &a, Fixed &b);
		Fixed static const &min(const Fixed &a, const Fixed &b);
		Fixed static &max(Fixed &a, Fixed &b);
		Fixed static const &max(const Fixed &a, const Fixed &b);

};

std::ostream &operator<<(std::ostream &op, const Fixed &original);

#endif
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int value;
		static const int bits;
	public:
		Fixed(void);
		Fixed(Fixed const &copy);
		Fixed &operator=(Fixed const &copy);
		~Fixed(void);
		int getRawBits(void)const;
		void setRawBits(const int raw);
};

#endif
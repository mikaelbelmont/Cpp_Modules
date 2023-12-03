#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(Fixed const &number)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = number;
}

Fixed::Fixed(const int int_nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = int_nb * (1 << Fixed::bits);
}

Fixed::Fixed(const float fract_nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(fract_nb * (1 << Fixed::bits));
}

Fixed &Fixed::operator=(Fixed const &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(copy.getRawBits());
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float Fixed::toFloat(void) const
{
	return (float)this->value / (float)(1 << Fixed::bits);
} 

int Fixed::toInt(void) const
{
	return this->value >> Fixed::bits;
}

std::ostream &operator<<(std::ostream &op, const Fixed &original)
{
	op << original.toFloat();
	return op;
}

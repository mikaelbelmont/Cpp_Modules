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
	std::cout << "Float constructor called" << std::endl;
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

bool Fixed::operator<(const Fixed &number)
{
	if (this->value < number.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>(const Fixed &number)
{
	if (this->value > number.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed &number)
{
	if (this->value <= number.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed &number)
{
	if (this->value >= number.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed &number)
{
	if (this->value == number.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed &number)
{
	if (this->value == number.getRawBits())
		return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed &number)
{
	Fixed num((this->toFloat() + number.toFloat()));
	return (num);
}

Fixed Fixed::operator-(const Fixed &number)
{
	Fixed num((this->toFloat() - number.toFloat()));
	return (num);
}

Fixed Fixed::operator*(const Fixed &number)
{
	Fixed num((this->toFloat() * number.toFloat()));
	return (num);
}

Fixed Fixed::operator/(const Fixed &number)
{
	Fixed num((this->toFloat() / number.toFloat()));
	return (num);
}

Fixed Fixed::operator++()
{
	this->value += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(this->value * toFloat());
	this->value++;
	return tmp;
}

Fixed Fixed::operator--()
{
	this->value -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(this->value * toFloat());
	this->value--;
	return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if ((Fixed &)a < (Fixed &)b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if ((Fixed &)a > (Fixed &)b)
		return (a);
	return (b);
}

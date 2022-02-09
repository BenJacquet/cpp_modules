/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:27:50 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/09 21:12:27 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
	return;
}

Fixed::Fixed(const Fixed & fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = fixed.getValue();
	return;
}

Fixed::Fixed(const int integer)
{
	this->_value = integer << this->_bits;
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(const float floating)
{
	this->_value = roundf(floating * (1 << this->_bits));
	std::cout << "Float constructor called" << std::endl;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &	Fixed::operator=(const Fixed & fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = fixed.getValue();
	return (*this);
}

Fixed Fixed::operator+(const Fixed & fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed & fixed) const
{
	return (this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed & fixed) const
{
	return (this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed & fixed) const
{
	return (this->toFloat() / fixed.toFloat());
}

Fixed Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp = *this;
	
	this->_value++;
	return (tmp);
}

Fixed Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp = *this;

	this->_value--;
	return (tmp);
}

bool Fixed::operator>(const Fixed & fixed) const
{
	if (this->_value > fixed.getValue())
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed & fixed) const
{
	if (this->_value < fixed.getValue())
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed & fixed) const
{
	if (this->_value >= fixed.getValue())
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed & fixed) const
{
	if (this->_value <= fixed.getValue())
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed & fixed) const
{
	if (this->_value == fixed.getValue())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed & fixed) const
{
	if (this->_value != fixed.getValue())
		return (true);
	return (false);
}

std::ostream & operator<<(std::ostream & COUT, Fixed const & fixed)
{
	COUT << fixed.toFloat();
	return (COUT);
}

int		Fixed::getValue(void) const
{
	return (this->_value);
}

int		Fixed::getRawBits() const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
	return;
}

float	Fixed::toFloat( void ) const
{
	return (static_cast<float>(this->_value) / static_cast<float>(1 << this->_bits));
}

int		Fixed::toInt( void ) const
{
	return (this->_value >> this->_bits);
}

Fixed & Fixed::min(Fixed & a, Fixed & b) const
{
	if (a <= b)
		return (a);
	return (b);
}

const Fixed & Fixed::min(const Fixed & a, const Fixed & b)
{
	if (a <= b)
		return (a);
	return (b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b) const
{
	if (a >= b)
		return (a);
	return (b);
}

const Fixed & Fixed::max(const Fixed & a, const Fixed & b)
{
	if (a >= b)
		return (a);
	return (b);
}

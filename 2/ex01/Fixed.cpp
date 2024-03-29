/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:27:50 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/09 13:50:04 by jabenjam         ###   ########.fr       */
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
	this->_value = fixed.getRawBits();
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
	std::cout << "getRawBits member function called" << std::endl;
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
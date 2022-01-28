/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:27:50 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/26 14:27:55 by jabenjam         ###   ########.fr       */
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
	*this = fixed;
	return;
}

Fixed::Fixed(const int integer)
{
	
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(const float floating)
{
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
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
	return;
}

float	Fixed::toFloat( void ) const
{
	return;
}

int		Fixed::toInt( void ) const
{
	return;
}
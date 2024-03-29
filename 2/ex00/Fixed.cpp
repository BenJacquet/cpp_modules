/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:27:50 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/14 14:25:49 by jabenjam         ###   ########.fr       */
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
}

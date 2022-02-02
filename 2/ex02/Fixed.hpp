/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:28:13 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/02 11:32:31 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
private:
	int					_value;
	static const int	_frac_bits = 8;

public:
	Fixed();
	Fixed(const Fixed &	fixed);
	Fixed(const int integer);
	Fixed(const float floating);
	~Fixed();
	Fixed & operator=(const Fixed & fixed);
	Fixed operator+(const Fixed & fixed) const;
	Fixed operator-(const Fixed & fixed) const;
	Fixed operator*(const Fixed & fixed) const;
	Fixed operator/(const Fixed & fixed) const;
	Fixed operator++(void);
	Fixed operator++(int);
	Fixed operator--(void);
	Fixed operator--(int);
	bool operator>(const Fixed & fixed) const ;
	bool operator<(const Fixed & fixed) const ;
	bool operator>=(const Fixed & fixed) const ;
	bool operator<=(const Fixed & fixed) const ;
	bool operator==(const Fixed & fixed) const ;
	bool operator!=(const Fixed & fixed) const ;
	int getValue() const;
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	Fixed & min(Fixed & a, Fixed & b) const;
	Fixed & min(Fixed & const a, Fixed & const b) const;
	Fixed & max(Fixed & a, Fixed & b) const;
	Fixed & max(Fixed & const a, Fixed & const b) const;
};

std::ostream & operator<<(std::ostream & COUT, Fixed const & fixed);

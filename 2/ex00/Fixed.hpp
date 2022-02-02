/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:28:13 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/02 11:32:10 by jabenjam         ###   ########.fr       */
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
	Fixed(const Fixed & fixed);
	~Fixed();
	Fixed &	Fixed::operator=(const Fixed & fixed);
	int		getValue() const;
	int		getRawBits() const;
	void	setRawBits(int const raw);
};

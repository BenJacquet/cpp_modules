/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:28:01 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/16 16:28:02 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <typeinfo>

class Converter
{

	public:
		Converter( float f );
		Converter( Converter const & src );
		~Converter();
		char getChar() const;
		int getInt() const;
		float getFloat() const;
		double getDouble() const;

		Converter &		operator=( Converter const & rhs );

	private:
		char	_c;
		int		_i;
		float	_f;
		double	_d;

};

std::ostream &			operator<<( std::ostream & COUT, Converter const & i );
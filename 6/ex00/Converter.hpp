/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:28:01 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/16 23:16:45 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>

class Converter
{

	public:
		Converter( std::string data );
		Converter( Converter const & src );
		~Converter();
		void printChar();
		void printInt();
		void printFloat();
		void printDouble();
		char getChar() const;
		int getInt() const;
		float getFloat() const;
		double getDouble() const;
		bool getFull() const;
		bool getSign() const;
		bool getInf() const;

		Converter & operator=( Converter const & src );

	private:
		float	_f;
		char	_c;
		int		_i;
		double	_d;
		bool	_full;
		bool	_sign;
		bool	_inf;
};

std::ostream & operator<<( std::ostream & COUT, Converter & i );
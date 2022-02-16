/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:27:58 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/16 16:28:37 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Converter::Converter( const Converter & src ) : _c(src.getChar()), _i(src.getInt()), _f(src.getFloat()), _d(src.getDouble())
{
}

Converter::Converter( float f ) : _f(f)
{
	this->_c = static_cast<char>(f);
	this->_i = static_cast<int>(f);
	this->_d = static_cast<double>(f);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Converter::~Converter()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// Converter &				Converter::operator=( Converter const & rhs )
// {
// 	//if ( this != &rhs )
// 	//{
// 		//this->_value = rhs.getValue();
// 	//}
// 	return *this;
// }

std::ostream &			operator<<( std::ostream & COUT, Converter const & i )
{
	COUT << "char: " << i.getChar() << std::endl;
	COUT << "int: " << i.getInt() << std::endl;
	COUT << "float: " << i.getFloat() << std::endl;
	COUT << "double: " << i.getDouble() << std::endl;
	return (COUT);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

char Converter::getChar() const {return (this->_c);}

int Converter::getInt() const {return (this->_i);}

float Converter::getFloat() const {return (this->_f);}

double Converter::getDouble() const {return (this->_d);}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
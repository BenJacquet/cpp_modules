/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:27:58 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/21 11:03:36 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter( std::string data )
{
	std::size_t dot = data.find_first_of('.', 0);
	this->_d = atof(data.c_str());
	if (data.compare("inf") == 0 || data.compare("-inf") == 0 || data.compare("+inf") == 0)
		this->_inf = true;
	else
		this->_inf = false;
	if (data.size() > 0 && data[0] == '-' && data.compare("inf"))
		this->_sign = true;
	else
		this->_sign = false;
	if ((data.find(".\0") != std::string::npos || data.find(".f\0") != std::string::npos) && (data.find_first_of("123456789", dot) == std::string::npos))
		this->_full = true;
	else if ((dot != std::string::npos && (data.find_first_not_of("123456789", dot) != std::string::npos)) || this->_d != this->_d)
		this->_full = false;
	else
		this->_full = true;
}

Converter::Converter( const Converter & src ) : _f(src.getFloat()), _c(src.getChar()), _i(src.getInt()), _d(src.getDouble()), _full(src.getFull()), _sign(src.getSign()), _inf(src.getInf()) {}

Converter::~Converter() {}

Converter & Converter::operator=( Converter const & src )
{
	if ( this == &src )
		return (*this);
	this->_f = src.getFloat();
	this->_c = src.getChar();
	this->_i = src.getInt();
	this->_d = src.getDouble();
	this->_full = src.getFull();
	this->_sign = src.getSign();
	this->_inf = src.getInf();
	return (*this);
}

void Converter::printChar()
{
	std::cout << "char: ";
	if (this->_d > 31 && this->_d < 127)
	{
		this->_c = static_cast<char>(this->_d);
		std::cout << '\'' << this->_c << '\'' << std::endl;
	}
	else if (this->_d >= 0 && this->_d < 128)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void Converter::printInt()
{
	std::cout << "int: ";
	if (this->_d <= std::numeric_limits<int>::max() &&
		this->_d >= std::numeric_limits<int>::min())
	{
		this->_i = static_cast<int>(this->_d);
		std::cout << this->_i <<std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

void Converter::printFloat()
{
	std::cout << "float: ";
	if (this->_inf == false)
	{
		this->_f = static_cast<float>(this->_d);
		std::cout << this->_f << (this->_full == true ? ".0" : "") << 'f' <<std::endl;
	}
	else 
		std::cout << (this->_sign ==  true ? "-" : "") << "inff" << std::endl;
}

void Converter::printDouble()
{
	std::cout << "double: ";
	if (this->_inf == false)
	{
		this->_f = static_cast<float>(this->_d);
		std::cout << (this->_sign == true ? "-" : "") << this->_d << (this->_full == true ? ".0" : "") <<std::endl;
	}
	else
		std::cout << (this->_sign == true ? "-" : "") << "inf" << std::endl;
}

char Converter::getChar() const {return (this->_c);}

int Converter::getInt() const {return (this->_i);}

float Converter::getFloat() const {return (this->_f);}

double Converter::getDouble() const {return (this->_d);}

bool Converter::getFull() const {return (this->_full);}

bool Converter::getSign() const {return (this->_sign);}

bool Converter::getInf() const {return (this->_inf);}

std::ostream & operator<<( std::ostream & COUT, Converter & i )
{
	i.printChar();
	i.printInt();
	i.printFloat();
	i.printDouble();
	return (COUT);
}
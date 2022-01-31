/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:03:57 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/31 13:23:02 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Default constructor for Ice class called." << std::endl;
}

Ice::Ice(std::string const & type) : _type(type)
{
	std::cout << "Parametric constructor for Ice class called." << std::endl;
}

Ice::~Ice()
{
	std::cout << "Destructor for Ice class called." << std::endl;
}

Ice & Ice::operator=(Ice & materia)
{
	this->_type = materia.getType();
	return (*this);
}

std::string Ice::getType() const
{
	return (this->_type);
}

void Ice::setType(std::string const & type)
{
	this->_type = type;
}

// virtual Ice* Ice::clone()
// {
	
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:03:57 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/04 09:42:06 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
	std::cout << "Default constructor for Ice class called." << std::endl;
}

Ice::Ice(Ice & src)
{
	std::cout << "Copy constructor for Ice class called." << std::endl;
	this->_type = src.getType();
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

Ice * Ice::clone() const
{
	Ice *ice = new Ice;
	
	ice->setType(this->getType());
	return (ice);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
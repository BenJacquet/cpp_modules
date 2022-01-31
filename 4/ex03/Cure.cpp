/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:21:59 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/31 13:23:06 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Default constructor for Cure class called." << std::endl;
}

Cure::Cure(std::string const & type) : _type(type)
{
	std::cout << "Parametric constructor for Cure class called." << std::endl;
}

Cure::~Cure()
{
	std::cout << "Destructor for Cure class called." << std::endl;
}

Cure & Cure::operator=(Cure & materia)
{
	this->_type = materia.getType();
	return (*this);
}

std::string Cure::getType() const
{
	return (this->_type);
}

void Cure::setType(std::string const & type)
{
	this->_type = type;
}

// virtual Cure* Cure::clone()
// {
	
// }
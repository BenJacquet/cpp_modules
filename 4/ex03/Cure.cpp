/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:21:59 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/15 20:02:09 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria()
{
	this->_type = "cure";
	// std::cout << "Default constructor for Cure class called." << std::endl;
}

Cure::Cure(Cure & src) : AMateria(src)
{
	// std::cout << "Copy constructor for Cure class called." << std::endl;
	this->_type = src.getType();
}

Cure::Cure(std::string const & type) : AMateria(type)
{
	// std::cout << "Parametric constructor for Cure class called." << std::endl;
}

Cure::~Cure()
{
	// std::cout << "Destructor for Cure class called." << std::endl;
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

Cure* Cure::clone() const
{
	Cure *cure = new Cure;
	
	cure->setType(this->getType());
	return (cure);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

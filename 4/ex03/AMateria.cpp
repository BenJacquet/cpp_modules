/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:03:57 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/15 20:53:38 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("empty"), _equipped(false)
{
	// std::cout << "Default constructor for AMateria class called." << std::endl;
}

AMateria::AMateria(AMateria & src)
{
	// std::cout << "Copy constructor for AMateria class called." << std::endl;
	this->_type = src.getType();
	this->_equipped = src.getEquipped();
}

AMateria::AMateria(std::string const & type) : _type(type),  _equipped(false)
{
	// std::cout << "Parametric constructor for AMateria class called." << std::endl;
}

AMateria::~AMateria()
{
	// std::cout << "Destructor for AMateria class called." << std::endl;
}

AMateria & AMateria::operator=(AMateria & materia)
{
	this->_type = materia.getType();
	this->_equipped = materia.getEquipped();
	return (*this);
}

std::string AMateria::getType() const
{
	return (this->_type);
}

bool AMateria::getEquipped() const
{
	return (this->_equipped);
}

void AMateria::setType(std::string const & type)
{
	this->_type = type;
}

void AMateria::setEquipped(bool equipped)
{
	this->_equipped = equipped;
}

void AMateria::use(ICharacter & target)
{
	std::cout << "* tries to cast a spell on " << target.getName() << " but the materia is empty *" << std::endl;
}

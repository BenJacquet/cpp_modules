/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:03:57 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/04 10:25:49 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Default constructor for AMateria class called." << std::endl;
	this->_type = "empty";
}

AMateria::AMateria(AMateria & src)
{
	std::cout << "Copy constructor for AMateria class called." << std::endl;
	this->_type = src.getType();
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "Parametric constructor for AMateria class called." << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Destructor for AMateria class called." << std::endl;
}

AMateria & AMateria::operator=(AMateria & materia)
{
	this->_type = materia.getType();
	return (*this);
}

std::string AMateria::getType() const
{
	return (this->_type);
}

void AMateria::setType(std::string const & type)
{
	this->_type = type;
}

AMateria* AMateria::clone() const
{
	
}

void AMateria::use(ICharacter& target)
{
	
}

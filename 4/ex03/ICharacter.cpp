/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:26:34 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/31 16:24:06 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	std::cout << "Default constructor for ICharacter class called." << std::endl;
}

ICharacter::ICharacter(std::string const & name) : _name(name)
{
	std::cout << "Parametric constructor for ICharacter class called." << std::endl;
}

ICharacter::~ICharacter()
{
	std::cout << "Destructor for ICharacter class called." << std::endl;
}

ICharacter & ICharacter::operator=(ICharacter & character)
{
	this->_name = character.getName();
	return (*this);
}


std::string const & ICharacter::getName() const
{
	return (this->_name);
}

void ICharacter::equip(AMateria* m)
{
	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->getInventory(i) == "empty")
		{
			this->setInventory(m, i);
			break;
		}
	}
}

std::string const & ICharacter::getInventory(int i) const
{
	return(this->_inventory[i].getType());
}

void ICharacter::setInventory(AMateria * m, int i)
{
	this->_inventory[i] = *m;
}

void ICharacter::unequip(int idx)
{
	this->_inventory[idx].setType("empty");
}

void ICharacter::use(int idx, ICharacter& target)
{
	_inventory[idx].use(target);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:49:25 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/04 10:25:53 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Default constructor for Character class called." << std::endl;
	this->_name = "default";
	this->_inventory[0] = NULL;
	this->_inventory[1] = NULL;
	this->_inventory[2] = NULL;
	this->_inventory[3] = NULL;
}

Character::Character(Character & src)
{
	std::cout << "Copy constructor for Character class called." << std::endl;
	this->_name = src.getName();
	this->_inventory[0] = src._inventory[0];
	this->_inventory[1] = src._inventory[1];
	this->_inventory[2] = src._inventory[2];
	this->_inventory[3] = src._inventory[3];
}

Character::Character(std::string const & name) : _name(name)
{
	std::cout << "Parametric constructor for Character class called." << std::endl;
	this->_inventory[0] = NULL;
	this->_inventory[1] = NULL;
	this->_inventory[2] = NULL;
	this->_inventory[3] = NULL;
}

Character::~Character()
{
	std::cout << "Destructor for Character class called." << std::endl;
}

Character & Character::operator=(Character & character)
{
	this->_name = character.getName();
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
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

std::string const & Character::getInventory(int i) const
{
	return(this->_inventory[i].getType());
}

void Character::setInventory(AMateria * m, int i)
{
	this->_inventory[i] = m;
}

void Character::unequip(int idx)
{
	this->_inventory[idx].setType("empty");
}

void Character::use(int idx, Character & target)
{
	this->_inventory[idx].use(target);
}
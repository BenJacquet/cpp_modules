/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:49:25 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/15 22:02:29 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	// std::cout << "Default constructor for Character class called." << std::endl;
	this->_name = "default";
	for (int i = 0 ; i < 4 ; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character & src)
{
	// std::cout << "Copy constructor for Character class called." << std::endl;
	this->_name = src.getName();
	for (int i = 0 ; i < 4 ; i++)
	{
		if (src.getInventory(i))
			this->_inventory[i] = src.getInventory(i)->clone();
		else
			this->_inventory[i] = NULL;
	}
}

Character::Character(std::string const & name) : _name(name)
{
	// std::cout << "Parametric constructor for Character class called." << std::endl;
	for (int i = 0 ; i < 4 ; i++)
		this->_inventory[i] = NULL;
}

Character::~Character()
{
	// std::cout << "Destructor for Character class called." << std::endl;
	for (int i = 0; i < 4 && this->_inventory[i]; i++)
		delete this->_inventory[i];
}

Character & Character::operator=(Character & character)
{
	if (this != &character)
	{
		this->_name = character.getName();
		for (int i = 0 ; i < 4 ; i++)
		{
			if (this->_inventory[i] != NULL)
			{
				delete this->_inventory[i];
				this->_inventory[i] = NULL;
			}
		}
		for (int i = 0 ; i < 4 ; i++)
		{
			if (character.getInventory(i))
				this->_inventory[i] = character.getInventory(i)->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::setName(std::string name)
{
	this->_name = name;
}

AMateria * Character::getInventory(int idx) const
{
	return (this->_inventory[idx]);
}

void Character::equip(AMateria* m)
{
	for (int i = 0 ; i < 4 ; i++)
	{
		if (this->_inventory[i] == m)
			return;
		else if (this->_inventory[i] == NULL && m->getEquipped() == false)
		{
			this->_inventory[i] = m;
			this->_inventory[i]->setEquipped(true);
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		this->_inventory[idx]->setEquipped(false);
		this->_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter & target)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}

std::ostream & operator<<(std::ostream & COUT, Character & character)
{
	COUT << character.getName() << "'s inventory:"<< std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (character.getInventory(i))
			COUT << "[" << i << "] (" << character.getInventory(i) << ")- " << character.getInventory(i)->getType() << std::endl;
		else
			COUT << "[" << i << "] - empty" << std::endl;
	}
	return (COUT);
}
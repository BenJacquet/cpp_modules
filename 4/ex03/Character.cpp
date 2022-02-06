/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:49:25 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/06 17:56:45 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Default constructor for Character class called." << std::endl;
	this->_name = "default";
	for (int i = 0 ; i < 4 ; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character & src)
{
	std::cout << "Copy constructor for Character class called." << std::endl;
	this->_name = src.getName();
	for (int i = 0 ; i < 4 ; i++)
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	for (int i = 0 ; i < 4 ; i++)
		if (src._inventory[i] != NULL)
			this->_inventory[i] = src._inventory[i]->clone();
}

Character::Character(std::string const & name) : _name(name)
{
	std::cout << "Parametric constructor for Character class called." << std::endl;
	for (int i = 0 ; i < 4 ; i++)
		this->_inventory[i] = NULL;
}

Character::~Character()
{
	std::cout << "Destructor for Character class called." << std::endl;
	for (int i = 0 ; i < 4 ; i++)
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
}

Character & Character::operator=(Character & character)
{
	if (this != &character)
	{
		this->_name = character.getName();
		for (int i = 0 ; i < 4 ; i++)
			this->_inventory[i] = character._inventory[i];
	}
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
		if (this->_inventory[i] == m)
			return;
		else if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = NULL;
}

void Character::use(int idx, Character & target)
{
	if (idx >= 0 && idx < 4)
		this->_inventory[idx]->use(target);
}
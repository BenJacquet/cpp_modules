/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:24:02 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/26 16:13:59 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor for ScavTrap called" << std::endl;
	this->_name = "SC4V-TP";
	this->_hitPoints = 100;
	this->_energy = 50;
	this->_attack = 20;
	return;
}

ScavTrap::ScavTrap(ScavTrap & src) : ClapTrap(src)
{
	std::cout << "Copy constructor for ClapTrap called" << std::endl;
	this->_name = src.getName();
	this->_hitPoints = src.getHitPoints();
	this->_energy = src.getEnergy();
	this->_attack = src.getAttack();
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Parametric constructor for ScavTrap called" << std::endl;
	this->_hitPoints = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor for ScavTrap called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap & scavtrap)
{
	std::cout << "Copy operator called" << std::endl;
	this->_name = scavtrap.getName();
	this->_hitPoints = scavtrap.getHitPoints();
	this->_energy = scavtrap.getEnergy();
	this->_attack = scavtrap.getAttack();
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energy > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
		this->_energy--;
	}
	else
		std::cout << "ScavTrap " << this->_name << " wants to attack " << target << ", but it does not have enough energy." << std::endl;
	return;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in gate keeper mode." << std::endl;
}

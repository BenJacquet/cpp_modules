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

ScavTrap::ScavTrap() : _name("SC4V-TP"), _hitPoints(10), _energy(10), _attack(0)
{
	std::cout << "Default constructor of ScavTrap called" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _name(name), _hitPoints(10), _energy(10), _attack(0)
{
	std::cout << "Parametric constructor of ScavTrap called" << std::endl;
	return;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor of ScavTrap called" << std::endl;
	return;
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

void ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
		std::cout << "ScavTrap " << this->_name << " is already dead..." << std::endl;
	else
	{
		this->_hitPoints -= amount;
		if (this->_hitPoints <= 0)
			this->_hitPoints = 0;
		std::cout << "ScavTrap " << this->_name << " has taken " << amount << " points of damage, it now has " << this->_hitPoints << " hitpoints." << std::endl;
		if (this->_hitPoints <= 0)
			std::cout << "ScavTrap " << this->_name << " has died..." << std::endl;
	}
	return;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0)
	{
		this->_hitPoints += amount;
		std::cout << "ScavTrap " << this->_name << " has repaired itself and recovered " << amount << " hitpoints, it now has " << this->_hitPoints << " hitpoints."<< std::endl;
		this->_energy--;
	}
	else
		std::cout << "ScavTrap " << this->_name << " wants to repair itself, but it does not have enough energy." << std::endl;
	return;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in gate keeper mode." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:04:33 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/28 12:55:07 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : _name("DMND-TP"), _hitPoints(FragTrap::getHitPoints()), _energy(ScavTrap::getEnergy()), _attack(FragTrap::getAttack())
{
	std::cout << "Default constructor of DiamondTrap called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), _name(name), _hitPoints(100), _energy(100), _attack(30)
{
	std::cout << "Parametric constructor of DiamondTrap called" << std::endl;
	return;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor of DiamondTrap called" << std::endl;
	return;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap & Diamondtrap)
{
	std::cout << "Copy operator called" << std::endl;
	this->_name = Diamondtrap.getName();
	this->_hitPoints = Diamondtrap.getHitPoints();
	this->_energy = Diamondtrap.getEnergy();
	this->_attack = Diamondtrap.getAttack();
	return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
	return;
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
		std::cout << "DiamondTrap " << this->_name << " is already dead..." << std::endl;
	else
	{
		this->_hitPoints -= amount;
		if (this->_hitPoints <= 0)
			this->_hitPoints = 0;
		std::cout << "DiamondTrap " << this->_name << " has taken " << amount << " points of damage, it now has " << this->_hitPoints << " hitpoints." << std::endl;
		if (this->_hitPoints <= 0)
			std::cout << "DiamondTrap " << this->_name << " has died..." << std::endl;
	}
	return;
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0)
	{
		this->_hitPoints += amount;
		std::cout << "DiamondTrap " << this->_name << " has repaired itself and recovered " << amount << " hitpoints, it now has " << this->_hitPoints << " hitpoints."<< std::endl;
		this->_energy--;
	}
	else
		std::cout << "DiamondTrap " << this->_name << " wants to repair itself, but it does not have enough energy." << std::endl;
	return;
}

void DiamondTrap::whoAmI()
{
	std::cout << "Hi! I'm DiamondTrap " << this->_name << "!" << std::endl;
}
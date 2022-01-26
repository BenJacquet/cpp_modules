/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:08:43 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/26 16:08:16 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("CL4P-TP"), _hitPoints(10), _energy(10), _attack(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energy(10), _attack(0)
{
	std::cout << "Parametric constructor called" << std::endl;
	return;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor of ClapTrap called" << std::endl;
	return;
}

ClapTrap & ClapTrap::operator=(ClapTrap & claptrap)
{
	std::cout << "Copy operator called" << std::endl;
	this->_name = claptrap.getName();
	this->_hitPoints = claptrap.getHitPoints();
	this->_energy = claptrap.getEnergy();
	this->_attack = claptrap.getAttack();
	return (*this);
}

std::string ClapTrap::getName() const
{
	return (this->_name);
}

int ClapTrap::getHitPoints() const
{
	return (this->_hitPoints);
}

int ClapTrap::getEnergy() const
{
	return (this->_energy);
}

int ClapTrap::getAttack() const
{
	return (this->_attack);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energy > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
		this->_energy--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " wants to attack " << target << ", but it does not have enough energy." << std::endl;
	return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << " is already dead..." << std::endl;
	else
	{
		this->_hitPoints -= amount;
		if (this->_hitPoints <= 0)
			this->_hitPoints = 0;
		std::cout << "ClapTrap " << this->_name << " has taken " << amount << " points of damage, it now has " << this->_hitPoints << " hitpoints." << std::endl;
		if (this->_hitPoints <= 0)
			std::cout << "ClapTrap " << this->_name << " has died..." << std::endl;
	}
	return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0)
	{
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " has repaired itself and recovered " << amount << " hitpoints, it now has " << this->_hitPoints << " hitpoints."<< std::endl;
		this->_energy--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " wants to repair itself, but it does not have enough energy." << std::endl;
	return;
}

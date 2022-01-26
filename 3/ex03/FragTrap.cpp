/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:17:49 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/26 16:57:57 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : _name("FR4G-TP"), _hitPoints(100), _energy(100), _attack(30)
{
	std::cout << "Default constructor of FragTrap called" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name), _name(name), _hitPoints(100), _energy(100), _attack(30)
{
	std::cout << "Parametric constructor of FragTrap called" << std::endl;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor of FragTrap called" << std::endl;
	return;
}

FragTrap & FragTrap::operator=(FragTrap & Fragtrap)
{
	std::cout << "Copy operator called" << std::endl;
	this->_name = Fragtrap.getName();
	this->_hitPoints = Fragtrap.getHitPoints();
	this->_energy = Fragtrap.getEnergy();
	this->_attack = Fragtrap.getAttack();
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if (this->_energy > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
		this->_energy--;
	}
	else
		std::cout << "FragTrap " << this->_name << " wants to attack " << target << ", but it does not have enough energy." << std::endl;
	return;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
		std::cout << "FragTrap " << this->_name << " is already dead..." << std::endl;
	else
	{
		this->_hitPoints -= amount;
		if (this->_hitPoints <= 0)
			this->_hitPoints = 0;
		std::cout << "FragTrap " << this->_name << " has taken " << amount << " points of damage, it now has " << this->_hitPoints << " hitpoints." << std::endl;
		if (this->_hitPoints <= 0)
			std::cout << "FragTrap " << this->_name << " has died..." << std::endl;
	}
	return;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0)
	{
		this->_hitPoints += amount;
		std::cout << "FragTrap " << this->_name << " has repaired itself and recovered " << amount << " hitpoints, it now has " << this->_hitPoints << " hitpoints."<< std::endl;
		this->_energy--;
	}
	else
		std::cout << "FragTrap " << this->_name << " wants to repair itself, but it does not have enough energy." << std::endl;
	return;
}

void FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->_name << " high fives everyone in the room!" << std::endl;
	return;
}

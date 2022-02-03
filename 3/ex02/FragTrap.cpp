/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:17:49 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/26 17:07:53 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default constructor for FragTrap called" << std::endl;
	this->_name = "FR4G-TP";
	this->_hitPoints = 100;
	this->_energy = 100;
	this->_attack = 30;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Parametric constructor for FragTrap called" << std::endl;
	this->_hitPoints = 100;
	this->_energy = 100;
	this->_attack = 30;
	return;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor for FragTrap called" << std::endl;
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

void FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->_name << " : Let's high five !" << std::endl;
	return;
}

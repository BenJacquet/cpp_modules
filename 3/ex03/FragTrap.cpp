/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:17:49 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/03 18:31:44 by jabenjam         ###   ########.fr       */
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

FragTrap::FragTrap(FragTrap & src) : ClapTrap(src)
{
	std::cout << "Copy constructor for FragTrap called" << std::endl;
	this->_name = src.getName();
	this->_hitPoints = src.getHitPoints();
	this->_energy = src.getEnergy();
	this->_attack = src.getAttack();
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

void FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->_name << " : Let's high five !" << std::endl;
	return;
}

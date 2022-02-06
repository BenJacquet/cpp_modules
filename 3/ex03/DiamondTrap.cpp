/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:04:33 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/03 18:31:39 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "Default constructor for DiamondTrap called" << std::endl;
	this->_name = "DMND-TP";
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;
	return;
}

DiamondTrap::DiamondTrap(DiamondTrap & src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "Copy constructor for DiamondTrap called" << std::endl;
	this->_name = src.getName();
	this->_hitPoints = src.getHitPoints();
	this->_energy = src.getEnergy();
	this->_attack = src.getAttack();
	return;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "Parametric constructor for DiamondTrap called" << std::endl;
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;
	return;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor for DiamondTrap called" << std::endl;
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

void DiamondTrap::whoAmI()
{
	std::cout << "private name : " << this->_name << ", claptrap name : " << this->ClapTrap::_name << std::endl;
}
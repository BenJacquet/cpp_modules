/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:24:00 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/28 12:55:16 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
	std::string _name;
	int _hitPoints;
	int _energy;
	int _attack;

public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap & operator=(ScavTrap & scavtrap);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate();
};

#endif
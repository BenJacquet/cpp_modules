/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:08:40 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/02 11:30:47 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class ClapTrap
{
private:
	std::string _name;
	int _hitPoints;
	int _energy;
	int _attack;

public:
	ClapTrap();
	ClapTrap(ClapTrap & src);
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap & operator=(ClapTrap & claptrap);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName() const;
	int getHitPoints() const;
	int getEnergy() const;
	int getAttack() const;
};

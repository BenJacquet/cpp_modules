/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:17:59 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/28 12:55:19 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
	std::string _name;
	int _hitPoints;
	int _energy;
	int _attack;
public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap & operator=(FragTrap & Fragtrap);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void highFiveGuys(void);
};

#endif
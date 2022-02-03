/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:24:00 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/02 11:31:05 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:

public:
	ScavTrap();
	ScavTrap(ScavTrap & src);
	ScavTrap(std::string name);
	virtual ~ScavTrap();
	ScavTrap & operator=(ScavTrap & scavtrap);
	void attack(const std::string& target);
	void guardGate();
};

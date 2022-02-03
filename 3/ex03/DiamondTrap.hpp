/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:04:35 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/02 11:31:47 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string _name;
public:
	DiamondTrap();
	DiamondTrap(DiamondTrap & src);
	DiamondTrap(std::string name);
	~DiamondTrap();
	DiamondTrap & operator=(DiamondTrap & Diamondtrap);
	void whoAmI();
};

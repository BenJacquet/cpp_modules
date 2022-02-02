/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:32:35 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/02 11:33:07 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon		&_weapon;

public:
	HumanA(std::string name, Weapon & weapon);
	~HumanA(void);
	void	attack(void);
	void	setWeapon(Weapon & weapon);
};

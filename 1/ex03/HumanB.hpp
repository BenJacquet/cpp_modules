/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:32:33 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/28 10:17:51 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		*_weapon;

public:
	HumanB(std::string name);
	~HumanB(void);
	void	attack(void);
	void	setWeapon(Weapon & weapon);
};

#endif
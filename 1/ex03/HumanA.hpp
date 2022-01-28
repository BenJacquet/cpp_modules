/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:32:35 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/28 10:22:04 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

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

#endif
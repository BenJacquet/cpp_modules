/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:32:31 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/21 18:36:17 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Weapon
{
private:
	std::string	type;
public:
	Weapon(void);
	~Weapon(void);
	std::string	getType(void);
	void		setType(std::string);
};

Weapon::Weapon(void)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}

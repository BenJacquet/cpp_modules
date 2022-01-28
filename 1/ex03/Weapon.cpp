/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 10:20:44 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/28 10:19:40 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	return;
}

Weapon::~Weapon(void)
{
	return;
}

std::string Weapon::getType (void) const
{
	return (this->_type);
}


void Weapon::setType (std::string type)
{
	this->_type = type;
	return;
}
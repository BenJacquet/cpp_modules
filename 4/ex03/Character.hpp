/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:49:45 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/03 14:50:05 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria * _inventory[4];
public:
	Character();
	Character(std::string const & name);
	virtual ~Character() {}
	Character & operator=(Character & character);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, Character & target);
	std::string const & getInventory(int i) const;
	void setInventory(AMateria * m, int i);
};
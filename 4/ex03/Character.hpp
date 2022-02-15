/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:49:45 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/15 21:25:20 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class AMateria;
class ICharacter;

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria * _inventory[4];
public:
	Character();
	Character(Character & src);
	Character(std::string const & name);
	~Character();
	Character & operator=(Character & character);
	std::string const & getName() const;
	void setName(std::string name);
	AMateria * getInventory(int idx) const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter & target);
};

std::ostream & operator<<(std::ostream & COUT, Character & character);
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:49:45 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/01 12:07:19 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class ICharacter
{
public:
	ICharacter();
	ICharacter(std::string const & name);
	virtual ~ICharacter() {}
	ICharacter & operator=(ICharacter & character);
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter & target) = 0;
	virtual std::string const & getInventory(int i) const;
	virtual void setInventory(AMateria * m, int i);
};

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria * _inventory;
public:
	Character();
	Character(std::string const & name);
	virtual ~Character() {}
	Character & operator=(Character & character);
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, Character & target);
	virtual std::string const & getInventory(int i) const;
	virtual void setInventory(AMateria * m, int i);
};

#endif
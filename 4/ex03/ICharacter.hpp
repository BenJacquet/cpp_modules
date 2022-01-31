/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:26:52 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/31 16:32:35 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class ICharacter
{
private:
	std::string _name;
	AMateria * _inventory;
public:
	ICharacter();
	ICharacter(std::string const & name);
	virtual ~ICharacter() {}
	ICharacter & operator=(ICharacter & character);
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
	virtual std::string const & getInventory(int i) const;
	virtual void setInventory(AMateria * m, int i);
};

#endif
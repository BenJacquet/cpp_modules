/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:48:30 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/03 14:50:24 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
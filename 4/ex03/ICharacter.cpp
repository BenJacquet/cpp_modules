/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:26:34 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/31 13:33:23 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	std::cout << "Default constructor for ICharacter class called." << std::endl;
}

ICharacter::ICharacter(std::string const & name) : _name(name)
{
	std::cout << "Parametric constructor for ICharacter class called." << std::endl;
}

ICharacter::~ICharacter()
{
	std::cout << "Destructor for ICharacter class called." << std::endl;
}

std::string const & ICharacter::getName() const
{
	return (this->_name);
}

void ICharacter::equip(AMateria* m)
{

}

void ICharacter::unequip(int idx)
{

}

void ICharacter::use(int idx, ICharacter& target)
{

}
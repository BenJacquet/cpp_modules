/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:44:40 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/28 17:09:25 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "WrongAnimal";
	std::cout << "Default WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal & src)
{
	this->_type = src.getType();
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "Parametric WrongAnimal constructor called." << std::endl;	
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal & wronganimal)
{
	this->_type = wronganimal.getType();
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "It makes a sound but we don't know which (wrong) animal it is." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

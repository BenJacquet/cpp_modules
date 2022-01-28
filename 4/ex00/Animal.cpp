/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:04:10 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/28 16:08:48 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "Animal";
	std::cout << "Default Animal constructor called." << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Parametric Animal constructor called." << std::endl;	
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "It makes a sound but we don't know which animal it is." << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:04:16 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/03 18:34:23 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _type("Dog")
{
	this->_brain = new Brain;
	std::cout << "Default Dog constructor called." << std::endl;
}

Dog::Dog(Dog & src)
{
	std::cout << "Copy Dog constructor called." << std::endl;
	this->_type = src.getType();
}

Dog::Dog(std::string const type) : _type(type)
{
	this->_brain = new Brain;
	std::cout << "Parametric Dog constructor called." << std::endl;	
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called." << std::endl;
}

Dog & Dog::operator=(Dog & dog)
{
	this->_type = dog.getType();
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Bark!" << std::endl;
}

std::string Dog::getType() const
{
	return (this->_type);
}

Brain & Dog::getBrain() const
{
	return (*this->_brain);
}

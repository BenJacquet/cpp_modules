/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:04:38 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/03 18:33:48 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _type("Cat")
{
	this->_brain = new Brain;
	std::cout << "Default Cat constructor called." << std::endl;
}

Cat::Cat(Cat & src)
{
	std::cout << "Copy Cat constructor called." << std::endl;
	this->_type = src.getType();
}

Cat::Cat(std::string const type) : _type(type)
{
	this->_brain = new Brain;
	std::cout << "Parametric Cat constructor called." << std::endl;	
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called." << std::endl;
}

Cat & Cat::operator=(Cat & cat)
{
	this->_type = cat.getType();
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meoooow" << std::endl;
}

std::string Cat::getType() const
{
	return (this->_type);
}

Brain & Cat::getBrain() const
{
	return (*this->_brain);
}
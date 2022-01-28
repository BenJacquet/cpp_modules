/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:04:38 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/28 16:01:41 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _type("Cat")
{
	std::cout << "Default Cat constructor called." << std::endl;
}

Cat::Cat(std::string const type) : _type(type)
{
	std::cout << "Parametric Cat constructor called." << std::endl;	
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meoooow" << std::endl;
}
std::string Cat::getType() const
{
	return (this->_type);
}

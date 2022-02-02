/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:45:33 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/28 17:09:30 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : _type("WrongCat")
{
	std::cout << "Default WrongCat constructor called." << std::endl;
}

WrongCat::WrongCat(std::string const type) : _type(type)
{
	std::cout << "Parametric WrongCat constructor called." << std::endl;	
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat & wrongcat)
{
	this->_type = wrongcat.getType();
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Meoooowrong" << std::endl;
}
std::string WrongCat::getType() const
{
	return (this->_type);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:14:51 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/02 14:45:59 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm()
{
	std::cout << "Default constructor for PresidentialPardonForm called" << std::endl;
	this->_target = "none";
	this::Form._signlvl = 25;
	this::Form._execlvl = 5;
}

PresidentialPardonForm(std::string target) : _target(target)
{
	this::Form._signlvl = 25;
	this::Form._execlvl = 5;
	std::cout << "Parametric constructor for PresidentialPardonForm called" << std::endl;
}

~PresidentialPardonForm()
{
	std::cout << "Destructor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm & operator=(PresidentialPardonForm & src)
{
	this->_signed = src.getSigned();
	return (*this);
}

PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	
}


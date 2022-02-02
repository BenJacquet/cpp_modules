/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:15:00 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/02 14:51:49 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm()
{
	std::cout << "Default constructor for RobotomyRequestForm called" << std::endl;
	this->_target = "none";
	this::Form._signlvl = 72;
	this::Form._execlvl = 45;
}

RobotomyRequestForm(std::string target) : _target(target)
{
	std::cout << "Parametric constructor for RobotomyRequestForm called" << std::endl;
	this::Form._signlvl = 72;
	this::Form._execlvl = 45;
}

~RobotomyRequestForm()
{
	std::cout << "Destructor for RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm & operator=(RobotomyRequestForm & src)
{
	this->_signed = src.getSigned();
	return (*this);
}

RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	
}

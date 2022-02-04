/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:15:00 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/04 14:35:13 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form(), _target("none"), _name("presidentialpardon"), _signed(false), _signlvl(72), _execlvl(45)
{
	std::cout << "Default constructor for RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & src) : Form(src), _target(src.getTarget()), _name(src.getName()), _signed(src.getSigned()), _signlvl(src.getSignLvl()), _execlvl(src.getExecLvl())
{
	std::cout << "Copy constructor for RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _target(target)
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

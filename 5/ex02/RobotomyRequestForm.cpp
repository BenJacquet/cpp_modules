/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:15:00 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/17 10:52:22 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("robotomy request", 72, 45), _target("none")
{
	std::cout << "Default constructor for RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & src) : Form(src), _target(src.getTarget())
{
	std::cout << "Copy constructor for RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request", 72, 45), _target(target)
{
	std::cout << "Parametric constructor for RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor for RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm & src)
{
	this->_signed = src.getSigned();
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void RobotomyRequestForm::robotomize() const
{
	timeval			t;
	unsigned int	seed;

	gettimeofday(&t, NULL);
	seed = t.tv_usec;
	srand(time(NULL) + seed);
	std::cout << "Dziiiiit Dziiiiit Dziiiiiit!" << std::endl;
	if ((rand() % 2) + 1 == 2)
		std::cout << this->_target << "'s robotomy is a success!" << std::endl;
	else
		std::cout << this->_target << "'s robotomy failed..." << std::endl;
}

void RobotomyRequestForm::executeForm() const
{
	this->robotomize();
}
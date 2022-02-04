/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:15:10 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/04 14:32:21 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << "Default constructor for ShrubberyCreationForm called" << std::endl;
	this->_target = "none";
	this::Form._signlvl = 145;
	this::Form._execlvl = 137;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & src) : Form(src), _target(src.getTarget()), _name(src.getName()), _signed(src.getSigned()), _signlvl(src.getSignLvl()), _execlvl(src.getExecLvl())
{
	std::cout << "Copy constructor for ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _target(target)
{
	std::cout << "Parametric constructor for ShrubberyCreationForm called" << std::endl;
	this::Form._signlvl = 145;
	this::Form._execlvl = 137;
}

~ShrubberyCreationForm()
{
	std::cout << "Destructor for ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm & operator=(ShrubberyCreationForm & src)
{
	this->_signed = src.getSigned();
	return (*this);
}

ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	try
	{
		if (this->_execlvl > 150 || this->_execlvl > 150)
			throw Form::GradeTooLowException();
		else if (this->_execlvl < 1 || this->_execlvl < 1)
			throw Form::GradeTooHighException();
		else
		{
			Bureaucrat.signForm(Form & form);
			this->_signed = true;
		}
	}
	catch (GradeTooLowException low)
	{
		std::cout << this->getName() << " form, " << low.getMessage() << std::endl;
	}
	catch (GradeTooHighException high)
	{
		std::cout << this->getName() << "form, " << high.getMessage() << std::endl;
	}
}

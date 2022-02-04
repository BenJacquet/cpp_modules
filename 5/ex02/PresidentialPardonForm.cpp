/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:14:51 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/04 14:56:35 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form(), _target("none"), _name("presidentialpardon"), _signed(false), _signlvl(25), _execlvl(5)
{
	std::cout << "Default constructor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & src) : Form(src), _target(src.getTarget()), _name(src.getName()), _signed(src.getSigned()), _signlvl(src.getSignLvl()), _execlvl(src.getExecLvl())
{
	std::cout << "Copy constructor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target), _name("presidentialpardon"), _signed(false), _signlvl(25), _execlvl(5)
{
	std::cout << "Parametric constructor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm & src)
{
	this->_signed = src.getSigned();
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	try
	{
		if (executor.getGrade() > this->_execlvl)
			throw Form::GradeTooLowException();
		else
		{
			bureaucrat.signForm(*this);
			this->_signed = true;
		}
	}
	catch (GradeTooLowException low)
	{
		std::cout << this->getName() << " form: " << low.getMessage() << std::endl;
	}
	catch (GradeTooHighException high)
	{
		std::cout << this->getName() << " form: " << high.getMessage() << std::endl;
	}
}

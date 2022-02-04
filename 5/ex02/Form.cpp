/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:59:27 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/04 14:59:14 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("empty"), _signed(false), _signlvl(150), _execlvl(150)
{
	std::cout << "Default constructor for Form called" << std::endl;
}

Form::Form(Form & src) : _name(src.getName()), _signed(src.getSigned()), _signlvl(src.getSignLvl()), _execlvl(src.getExecLvl())
{
	std::cout << "Copy constructor for Form called" << std::endl;
	try
	{
		if (this->_signlvl > 150 || this->_execlvl > 150)
			throw Form::GradeTooLowException();
		else if (this->_signlvl < 1 || this->_execlvl < 1)
			throw Form::GradeTooHighException();
	}
	catch (GradeTooLowException low)
	{
		std::cout << this->getName() << " form: " << low.getMessage() << std::endl;
	}
	catch (GradeTooHighException high)
	{
		std::cout << this->getName() << "form: " << high.getMessage() << std::endl;
	}
}

Form::Form(std::string const name, int const signlvl, int const execlvl) : _name(name), _signed(false), _signlvl(signlvl), _execlvl(execlvl)
{
	std::cout << "Parametric constructor for Form called" << std::endl;
	try
	{
		if (this->_signlvl > 150 || this->_execlvl > 150)
			throw Form::GradeTooLowException();
		else if (this->_signlvl < 1 || this->_execlvl < 1)
			throw Form::GradeTooHighException();
	}
	catch (GradeTooLowException low)
	{
		std::cout << this->getName() << " form: " << low.getMessage() << std::endl;
	}
	catch (GradeTooHighException high)
	{
		std::cout << this->getName() << "form: " << high.getMessage() << std::endl;
	}
}

Form::~Form()
{
	std::cout << "Destructor for Form called" << std::endl;
}

Form & Form::operator=(Form & form)
{
	this->_signed = form.getSigned();
	return (*this);
}

std::string const Form::getName()
{
	return (this->_name);
}

bool Form::getSigned()
{
	return (this->_signed);
}

int Form::getSignLvl()
{
	return (this->_signlvl);
}

int Form::getExecLvl()
{
	return (this->_execlvl);
}

void Form::beSigned(Bureaucrat & bureaucrat)
{
	try
	{
		if (this->_signlvl > 150 || this->_execlvl > 150)
			throw Form::GradeTooLowException();
		else if (this->_signlvl < 1 || this->_execlvl < 1)
			throw Form::GradeTooHighException();
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

bool Form::checkLvl(Bureaucrat & bureaucrat)
{
	
}

std::ostream & operator<<(std::ostream & COUT, Form & form)
{
	COUT << "Form name : " << form.getName() << std::endl
	<< "Signed : " << form.getSigned() << std::endl
	<< "Sign grade required : " << form.getSignLvl() << std::endl
	<< "Execution grade required : " << form.getExecLvl() << std::endl;
	return (COUT);
}

Form::GradeTooHighException::GradeTooHighException()
{
	this->_msg = "grade is too high.";
}

Form::GradeTooHighException::~GradeTooHighException()
{
	
}

std::string Form::GradeTooHighException::getMessage()
{
	return (this->_msg);
}

Form::GradeTooLowException::GradeTooLowException()
{
	this->_msg = "grade is too low.";
}

Form::GradeTooLowException::~GradeTooLowException()
{
	
}

std::string Form::GradeTooLowException::getMessage()
{
	return (this->_msg);
}
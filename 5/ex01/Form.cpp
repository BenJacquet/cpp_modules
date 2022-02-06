/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:59:27 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/06 21:57:12 by jabenjam         ###   ########.fr       */
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
	catch (std::exception & exception)
	{
		std::cout << this->getName() << " form: " << exception.what() << std::endl;
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
	catch (std::exception & exception)
	{
		std::cout << this->getName() << " form: " << exception.what() << std::endl;
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

std::string const Form::getName() const
{
	return (this->_name);
}

bool Form::getSigned() const
{
	return (this->_signed);
}

void Form::setSigned(bool sign)
{
	this->_signed = sign;
}

int Form::getSignLvl() const
{
	return (this->_signlvl);
}

int Form::getExecLvl() const
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
			bureaucrat.signForm(*this);
	}
	catch (std::exception & exception)
	{
		std::cout << this->getName() << " form: " << exception.what() << std::endl;
	}
}

std::ostream & operator<<(std::ostream & COUT, Form & form)
{
	COUT << "Form name : " << form.getName() << std::endl
	<< "Signed : " << form.getSigned() << std::endl
	<< "Sign grade required : " << form.getSignLvl() << std::endl
	<< "Execution grade required : " << form.getExecLvl() << std::endl;
	return (COUT);
}

Form::GradeTooHighException::GradeTooHighException() throw() {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("grade is too high.");
}

Form::GradeTooLowException::GradeTooLowException() throw() {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("grade is too low.");
}
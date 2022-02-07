/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:20:05 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/06 21:57:14 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default constructor for Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int const grade) : _name(name), _grade(grade)
{
	std::cout << "Parametric constructor for Bureaucrat called" << std::endl;
	try
	{
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch (std::exception & exception)
	{
		std::cout << this->getName() << "'s " << exception.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor for Bureaucrat called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat & bureaucrat)
{
	this->_grade = bureaucrat.getGrade();
	return (*this);
}

std::ostream & operator<<(std::ostream & COUT, Bureaucrat & bureaucrat)
{
	COUT << bureaucrat.getName() << "'s grade is " << bureaucrat.getGrade() << ".";
	return (COUT);
}

void Bureaucrat::operator++(int)
{
	try
	{
		if (this->_grade > 1)
			this->_grade--;
		else
			throw Bureaucrat::GradeTooHighException();
	}
	catch (std::exception & exception)
	{
		std::cout << this->getName() << "'s " << exception.what() << std::endl;
	}
}

void Bureaucrat::operator--(int)
{
	try
	{
		if (this->_grade < 150)
			this->_grade++;
		else
			throw Bureaucrat::GradeTooLowException();
	}
	catch (std::exception & exception)
	{
		std::cout << this->getName() << "'s " << exception.what() << std::endl;
	}
}

std::string const Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::signForm(Form & form)
{
	if (form.getSigned() == true)
		std::cout << this->_name << " couldn't sign form " << form.getName() << " because it is already signed." << std::endl;
	else
	{
		try
		{
			if (this->_grade > form.getSignLvl())
				throw Bureaucrat::GradeTooLowException();
			else
			{
				form.setSigned(true);
				std::cout << this->getName() << " signed " << form.getName() << std::endl;
			}
		}
		catch (std::exception & exception)
		{
			std::cout << this->getName() << " couldn't sign " << form.getName() << " because their " << exception.what() << std::endl;
		}
	}
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		if (this->getGrade() > form.getExecLvl())
			throw Bureaucrat::GradeTooLowException();
		else if (form.getSigned() == false)
			throw Bureaucrat::NotSignedException();
		else
		{
			form.executeForm();
			std::cout << this->getName() << " executed " << form.getName() << std::endl;
		}
	}
	catch (std::exception & exception)
	{
		std::cout << this->getName() << " couldn't execute " << form.getName() << " because " << exception.what() << std::endl;
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade is too high.");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade is too low.");
}

Bureaucrat::NotSignedException::NotSignedException() throw() {}

Bureaucrat::NotSignedException::~NotSignedException() throw() {}

const char* Bureaucrat::NotSignedException::what() const throw()
{
	return ("form is not signed.");
}
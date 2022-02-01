/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:20:05 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/01 14:28:49 by jabenjam         ###   ########.fr       */
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
			throw GradeTooLowException();
		else if (this->_grade < 1)
			throw GradeTooHighException();
	}
	catch (GradeTooLowException low)
	{
		std::cout << this->getName() << "'s " << low.what() << std::endl;
	}
	catch (GradeTooHighException high)
	{
		std::cout << this->getName() << "'s " << high.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor for Bureaucrat called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat & bureaucrat)
{
	this->_grade = bureaucrat.getGrade();
	this->_name = bureaucrat.getName();
	return (*this);
}

std::ostream & operator<<(std::ostream & COUT, Bureaucrat & bureaucrat)
{
	COUT << bureaucrat.getName() << "'s grade is " << bureaucrat.getGrade() << ".";
	return (COUT);
}

void Bureaucrat::operator++()
{
	try
	{
		if (this->_grade > 1)
			this->_grade--;
		else
			throw GradeTooHighException();
	}
	catch (GradeTooHighException high)
	{
		std::cout << this->getName() << "'s " << high.what() << std::endl;
	}
}

void Bureaucrat::operator--()
{
	try
	{
		if (this->_grade < 150)
			this->_grade++;
		else
			throw GradeTooLowException();
	}
	catch (GradeTooLowException low)
	{
		std::cout << this->getName() << "'s " << low.what() << std::endl;
	}
}

std::string const Bureaucrat::getName()
{
	return (this->_name);
}

int Bureaucrat::getGrade()
{
	return (this->_grade);
}

// void Bureaucrat::GradeTooHighException()
// {
// 	std::cout << this->getName() << "'s grade is too high!" << std::endl;
// }

// void Bureaucrat::GradeTooLowException()
// {
// 	std::cout << this->getName() << "'s grade is too low!" << std::endl;
// }

GradeTooHighException::GradeTooHighException()
{
	this->_msg = "grade is too high!";
}

GradeTooHighException::~GradeTooHighException()
{
	
}

GradeTooLowException::GradeTooLowException()
{
	this->_msg = "grade is too low...";
}

GradeTooLowException::~GradeTooLowException()
{
	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:20:05 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/01 15:51:35 by jabenjam         ###   ########.fr       */
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
		std::cout << this->getName() << "'s " << low.getMessage() << std::endl;
	}
	catch (GradeTooHighException high)
	{
		std::cout << this->getName() << "'s " << high.getMessage() << std::endl;
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
			throw GradeTooHighException();
	}
	catch (GradeTooHighException high)
	{
		std::cout << this->getName() << "'s " << high.getMessage() << std::endl;
	}
}

void Bureaucrat::operator--(int)
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
		std::cout << this->getName() << "'s " << low.getMessage() << std::endl;
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
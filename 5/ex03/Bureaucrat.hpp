/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:20:10 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/06 21:15:13 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string const _name;
	int _grade;

public:
	Bureaucrat();
	Bureaucrat(std::string const name, int const grade);
	~Bureaucrat();
	Bureaucrat & operator=(Bureaucrat & bureaucrat);
	void operator++(int);
	void operator--(int);
	std::string const getName() const;
	int getGrade() const;
	void signForm(Form & form);
	void executeForm(Form const & form);

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException() throw();
		~GradeTooHighException() throw();
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException() throw();
		~GradeTooLowException() throw();
		virtual const char* what() const throw();
	};

	class NotSignedException : public std::exception
	{
	public:
		NotSignedException() throw();
		~NotSignedException() throw();
		virtual const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream & COUT, Bureaucrat & bureaucrat);

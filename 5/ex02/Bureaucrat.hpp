/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:20:10 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/04 18:51:40 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string const _name;
	int _grade;
	class GradeTooHighException
	{
	private:
		std::string _msg;
	public:
		GradeTooHighException();
		~GradeTooHighException();
		std::string getMessage();
	};
	class GradeTooLowException
	{
	private:
		std::string _msg;
	public:
		GradeTooLowException();
		~GradeTooLowException();
		std::string getMessage();
	};
	class NotSignedException
	{
	private:
		std::string _msg;
	public:
		NotSignedException();
		~NotSignedException();
		std::string getMessage();
	};
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
};

std::ostream & operator<<(std::ostream & COUT, Bureaucrat & bureaucrat);

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:20:10 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/02 14:47:23 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Bureaucrat
{
private:
	std::string const _name;
	int _grade;
	class GradeTooHighException : public std::exception
	{
	private:
		std::string _msg;
	public:
		GradeTooHighException();
		~GradeTooHighException();
		std::string getMessage();
	};
	class GradeTooLowException : public std::exception
	{
	private:
		std::string _msg;
	public:
		GradeTooLowException();
		~GradeTooLowException();
		std::string getMessage();
	};
public:
	Bureaucrat();
	Bureaucrat(std::string const name, int const grade);
	~Bureaucrat();
	Bureaucrat & operator=(Bureaucrat & bureaucrat);
	operator++(int);
	operator--(int);
	std::string const getName();
	int getGrade();
	signForm(Form & form);
	executeForm(Form const & form);
};

std::ostream & operator<<(std::ostream & COUT, Bureaucrat & bureaucrat);

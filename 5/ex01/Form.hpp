/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:57:32 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/04 15:15:55 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const _name;
	bool _signed;
	int const _signlvl;
	int const _execlvl;
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
	Form();
	Form(Form & src);
	Form(std::string const name, int const signlvl, int const execlvl);
	~Form();
	Form & operator=(Form & form);
	std::string const getName() const;
	bool getSigned() const;
	int getSignLvl() const;
	int getExecLvl() const;
	void beSigned(Bureaucrat & bureaucrat);
};

std::ostream & operator<<(std::ostream & COUT, Form & form);

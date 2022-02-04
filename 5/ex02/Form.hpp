/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:57:32 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/04 14:58:11 by jabenjam         ###   ########.fr       */
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
protected:
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
	virtual ~Form() = 0;
	Form & operator=(Form & form);
	std::string const getName();
	bool getSigned();
	int getSignLvl();
	int getExecLvl();
	void beSigned(Bureaucrat & bureaucrat);
	bool checkLvl(Bureaucrat & bureaucrat);
};

std::ostream & operator<<(std::ostream & COUT, Form & form);

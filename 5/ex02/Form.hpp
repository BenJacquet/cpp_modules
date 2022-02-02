/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:57:32 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/02 14:29:41 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

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
	Form(std::string const name, int const signlvl, int const execlvl);
	virtual ~Form() = 0;
	Form & operator=(Form & form);
	std::string const getName();
	virtual bool getSigned();
	virtual const int getSignLvl();
	virtual const int getExecLvl();
	virtual void beSigned(Bureaucrat & Bureaucrat);
};

std::ostream & operator<<(std::ostream & COUT, Form & form);

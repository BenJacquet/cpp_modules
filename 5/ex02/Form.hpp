/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:57:32 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/04 18:51:53 by jabenjam         ###   ########.fr       */
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
	Form();
	Form(Form & src);
	Form(std::string const name, int const signlvl, int const execlvl);
	virtual ~Form() = 0;
	Form & operator=(Form & form);
	std::string const getName() const;
	bool getSigned() const;
	int getSignLvl() const;
	int getExecLvl() const;
	void beSigned(Bureaucrat & bureaucrat);
	bool checkExecLvl(Bureaucrat const & bureaucrat);
};

std::ostream & operator<<(std::ostream & COUT, Form & form);

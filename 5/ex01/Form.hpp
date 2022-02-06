/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:57:32 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/06 21:56:13 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const _name;
	bool _signed;
	int const _signlvl;
	int const _execlvl;

public:
	Form();
	Form(Form & src);
	Form(std::string const name, int const signlvl, int const execlvl);
	~Form();
	Form & operator=(Form & form);
	std::string const getName() const;
	bool getSigned() const;
	void setSigned(bool sign);
	int getSignLvl() const;
	int getExecLvl() const;
	void beSigned(Bureaucrat & bureaucrat);

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
};

std::ostream & operator<<(std::ostream & COUT, Form & form);

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:20:10 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/01 14:24:59 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class GradeTooHighException : public std::exception
{
private:
	std::string _msg;
public:
	GradeTooHighException();
	~GradeTooHighException();
	virtual const char* what() const noexcept override;
};

class GradeTooLowException : public std::exception
{
private:
	std::string _msg;
public:
	GradeTooLowException();
	~GradeTooLowException();
	virtual const char* what() const noexcept override;
};

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
	void operator++();
	void operator--();
	std::string const getName();
	int getGrade();
};

std::ostream & operator<<(std::ostream & COUT, Bureaucrat & bureaucrat);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:20:10 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/01 16:11:00 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

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
	std::string const getName();
	int getGrade();
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
};

std::ostream & operator<<(std::ostream & COUT, Bureaucrat & bureaucrat);

#endif
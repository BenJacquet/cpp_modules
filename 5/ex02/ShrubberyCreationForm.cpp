/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:15:10 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/06 21:18:22 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("shrubbery creation", 145, 137), _target("none")
{
	std::cout << "Default constructor for ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & src) : Form(src), _target(src.getTarget())
{
	std::cout << "Copy constructor for ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery creation", 145, 137), _target(target)
{
	std::cout << "Parametric constructor for ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor for ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm & src)
{
	this->_signed = src.getSigned();
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void ShrubberyCreationForm::makeShrubbery()
{
	std::ofstream shrubbery(this->_target.c_str());

	if (shrubbery.is_open())
		shrubbery << TREES << TREES << TREES << std::endl;
	else
		std::cout << "Could not open or create file" << std::endl;
}

void ShrubberyCreationForm::executeForm()
{
	this->makeShrubbery();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:14:51 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/04 18:24:02 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("presidentialpardon", 25, 5), _target("none")
{
	std::cout << "Default constructor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & src) : Form(src), _target(src.getTarget())
{
	std::cout << "Copy constructor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidentialpardon", 25, 5), _target(target)
{
	std::cout << "Parametric constructor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor for PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm & src)
{
	this->_signed = src.getSigned();
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void PresidentialPardonForm::pardon()
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	if (checkExecLvl(executor) == true)
	{
		executor.getName();
		this->pardon();
	}
}

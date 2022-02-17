/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:10:00 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/17 11:21:05 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Default Constructor for Intern called." << std::endl;
}

Intern::Intern(Intern & intern)
{
	std::cout << "Copy Constructor for Intern called." << std::endl;
	(void)intern;
}

Intern::~Intern()
{
	std::cout << "Destructor for Intern called." << std::endl;
}

Intern & Intern::operator=(Intern & intern)
{
	(void)intern;
	return (*this);
}

Form * Intern::makeForm(std::string name, std::string target)
{
	Form		*form = NULL;
	std::string	forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form		*(Intern::*functions[3])(std::string) = {&Intern::generateShrubbery, &Intern::generateRobotomy, &Intern::generatePresidential};

	for (int i = 0; i < 3 ; i++)
	{
		if (name.compare(forms[i]) == 0)
		{
			form = (this->*functions[i])(target);
			std::cout << "Intern creates a " << form->getName() << " form" << std::endl;
			return (form);
		}
	}
	std::cout << "Intern couldn't create form " << name << " because it does not correspond to an existing form type" << std::endl;
	return (form);
}

Form * Intern::generateShrubbery(std::string target) {return (new ShrubberyCreationForm(target));}

Form * Intern::generateRobotomy(std::string target) {return (new RobotomyRequestForm(target));}

Form * Intern::generatePresidential(std::string target) {return (new PresidentialPardonForm(target));}
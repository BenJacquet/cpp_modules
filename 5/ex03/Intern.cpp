/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:10:00 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/07 14:29:26 by jabenjam         ###   ########.fr       */
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
	bool		found = true;
	int			i = 0;
	std::string	forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (; i < 3 ; i++)
	{
		if (name.compare(forms[i]) == 0)
			break;
	}
	switch (i)
	{
		case (0):
		{
			form = new ShrubberyCreationForm(target);
			break;
		}
		case (1):
		{
			form = new RobotomyRequestForm(target);
			break;
		}
		case (2):
		{
			form = new PresidentialPardonForm(target);
			break;
		}
		default :
			found = false;
	}
	if (found == true)
		std::cout << "Intern creates " << form->getName() << std::endl;
	else
		std::cout << "Intern couldn't create form " << name << " because it does not correspond to an existing form type" << std::endl;
	return (form);
}

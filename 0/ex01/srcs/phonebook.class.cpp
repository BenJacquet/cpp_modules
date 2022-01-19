/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:18:19 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/19 16:42:02 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/phonebook.class.hpp"
#include "../incs/contact.class.hpp"

Phonebook::Phonebook(void)
{
	this->cmd = new char;
	// std::cout << "Constructor called" << std::endl;
	return;
}

Phonebook::~Phonebook(void)
{
	delete this->cmd;
	// std::cout << "Destructor called" << std::endl;
	return;
}

void	Phonebook::add(Contact *contacts, int i)
{
	contacts[i].index = i + 1;
	contacts[i].first_name = new char;
	contacts[i].last_name = new char;
	contacts[i].nickname = new char;
	contacts[i].phone = new char;
	contacts[i].secret = new char;

	return;
}

void	Phonebook::search(Contact *contacts) const
{
	return;
}

void	Phonebook::exit(Contact *contacts)
{
	while (contacts)
	{
		
	}
	return;
}
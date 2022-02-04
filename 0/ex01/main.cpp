/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:39:15 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/04 09:51:21 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

std::string	truncate(std::string data, int maxchars)
{
	if (data.length() <= maxchars)
		return (data);
	else
		return (data.substr(0, maxchars - 1) + ".");
}

bool		good_index(std::string cmd, Contact *contacts, int *index)
{
	const char	*str = NULL;
	bool		good = true;

	*index = -1;
	str = cmd.c_str();
	for (int i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			good = false;
	}
	*index = atoi(str);
	if (*index <= 0 || *index >= 9)
		good =  false;
	if (contacts[*index - 1].get_empty() == true)
	{
		*index = -1;
		good = false;
	}
	return (good);
}

int			main(int ac, char **av)
{
	PhoneBook	phonebook;

	phonebook.loop(ac, av);
	return (0);
}
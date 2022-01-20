/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:39:15 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/20 17:12:37 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/phonebook.class.hpp"
#include "../incs/contact.class.hpp"

int	main(int ac, char **av)
{
	Phonebook	phonebook;
	Contact		contacts[8];
	int			i = 0;
	std::string	cmd;

	while (1)
	{
		std::cout << "Veuillez entrer une commande : (ADD - SEARCH - EXIT)" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd[0] == '\0')
			break;
		if (cmd.compare("EXIT") == 0)
			break;
		else if (cmd.compare("ADD") == 0)
		{
			contacts[i].add();
			if (contacts[i].check_empty() == false)
				i++;
			if (i == 7)
				i = 0;
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			if (contacts[0].get_empty() == true)
				std::cout << "You do not have any contact." << std::endl;
			else
			{
				std::cout << "     index|first name|last name |nickname" << std::endl;
				for (int j = 0; contacts[j].get_empty() == false; j++)
					contacts[j].get_data(j);
			}
		}
		cmd.clear();
		// std::cin.clear();
		// std::cin.ignore(1000, '\n');
	}
	return (0);
}
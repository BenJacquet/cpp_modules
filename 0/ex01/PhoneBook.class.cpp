/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:18:19 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/04 09:51:28 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void		PhoneBook::loop(int ac, char **av)
{
	int			i = 0, index = -1;
	std::string	cmd;

	while (1)
	{
		cmd.clear();
		std::cout << "Input a command : (ADD - SEARCH - EXIT)" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd.compare("EXIT") == 0 || std::cin.eof())
			break;
		else if (cmd.compare("ADD") == 0)
		{
			if (this->contacts[i].add() == true)
				i++;
			if (i == 8)
				i = 0;
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			if (this->contacts[0].get_empty() == true)
				std::cout << "You do not have any contact." << std::endl;
			else
			{
				std::cout << std::endl << "     index | first name | last name  | nickname" << std::endl;
				for (int j = 0; j < 8 ; j++)
				{
					if (this->contacts[j].get_empty() == false)
						this->contacts[j].get_data_short(j);
				}
				std::cout << std::endl;
				cmd.clear();
				std::cout << "Input a contact index :" << std::endl;
				std::getline(std::cin, cmd);
				if (good_index(cmd, this->contacts, &index) == false)
					std::cout << "Invalid input or contact is empty." << std::endl;
				else
					this->contacts[index - 1].get_data_full(index - 1);
			}
		}
	}
	return;
}
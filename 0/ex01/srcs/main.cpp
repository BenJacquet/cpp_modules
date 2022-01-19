/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:39:15 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/19 16:42:03 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/phonebook.class.hpp"
#include "../incs/contact.class.hpp"

int	main(int ac, char **av)
{
	Phonebook	phonebook;
	Contact		contacts[8];
	int			i = 0;

	while (1)
	{
		std::cout << "Veuillez entrer une commande : (ADD - SEARCH - EXIT)" << std::endl;
		std::cin >> phonebook.cmd;
		std::cout << "command received is " << phonebook.cmd << std::endl;
		if (phonebook.cmd[0] == '\0')
			break;
		if (strcmp(phonebook.cmd, "EXIT") == 0)
		{
			phonebook.exit(contacts);
			break;
		}
		else if (strcmp(phonebook.cmd, "ADD") == 0)
		{
			phonebook.add(contacts, i);
			if (i < 8)
				i++;
		}
		else if (strcmp(phonebook.cmd, "SEARCH") == 0)
			phonebook.search(contacts);
	}
	return (0);
}
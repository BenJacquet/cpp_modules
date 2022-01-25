/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:49:22 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/25 16:32:49 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}
	int			i = 0;
	bool		found = false;
	std::string	filter = av[1];
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Karen		karen;
	while (i < 4)
	{
		if (filter.compare(levels[i]) == 0)
		{
			found = true;
			break;
		}
		i++;
	}
	if (found == false)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}
	while (i < 4)
		karen.complain(levels[i++]);
	return (0);
}
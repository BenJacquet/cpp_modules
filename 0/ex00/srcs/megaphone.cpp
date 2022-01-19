/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:04:43 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/19 12:15:05 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/megaphone.hpp"

int	main(int ac, char **av)
{
	int	i = 1, j = 0;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (av[i])
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			std::cout << (char)toupper(av[i][j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
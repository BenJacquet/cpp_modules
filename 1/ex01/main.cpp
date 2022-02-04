/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:16:41 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/04 15:38:32 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		std::string name = av[1];
		int	nb = atoi(av[2]);
		Zombie	*horde = zombieHorde(nb, name);

		for (int i = 0 ; i < nb ; i++)
			horde[i].announce();
		delete [] horde;
	}
	return (0);
}
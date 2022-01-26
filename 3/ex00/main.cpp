/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:08:45 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/26 15:21:14 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	else
	{
		ClapTrap	claptrap;
		ClapTrap	claptrap2(av[1]);

		claptrap.attack("Jack");
		claptrap.takeDamage(9);
		for (int i = 0 ; i < 10 ; i++)
			claptrap.beRepaired(1);
		claptrap.attack("Handsome Jack");
		claptrap.beRepaired(1);
		claptrap.takeDamage(20);
		claptrap.takeDamage(1);

		claptrap2.attack("Handsome Jack");
		claptrap2.beRepaired(100);
		claptrap2.takeDamage(1000);
		claptrap2.takeDamage(1);

		ClapTrap	claptrap3 = claptrap2;
		claptrap2.takeDamage(1);
	}
	return (0);
}
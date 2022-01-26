/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:08:45 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/26 17:06:57 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	else
	{
		DiamondTrap	Diamondtrap;
		DiamondTrap	Diamondtrap2(av[1]);

		Diamondtrap.attack("Jack");
		Diamondtrap.takeDamage(9);
		for (int i = 0 ; i < 10 ; i++)
			Diamondtrap.beRepaired(1);
		Diamondtrap.attack("Handsome Jack");
		Diamondtrap.beRepaired(1);
		Diamondtrap.takeDamage(20);
		Diamondtrap.takeDamage(1);

		Diamondtrap2.attack("Handsome Jack");
		Diamondtrap2.beRepaired(100);
		Diamondtrap2.guardGate();
		Diamondtrap2.takeDamage(1000);

		DiamondTrap	Diamondtrap3 = Diamondtrap2;
		Diamondtrap3.takeDamage(1);
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:08:45 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/26 17:59:04 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	else
	{
		DiamondTrap	diamondtrap;
		DiamondTrap	diamondtrap2(av[1]);

		diamondtrap.attack("Jack");
		diamondtrap.takeDamage(9);
		for (int i = 0 ; i < 10 ; i++)
			diamondtrap.beRepaired(1);
		diamondtrap.attack("Handsome Jack");
		diamondtrap.beRepaired(1);
		diamondtrap.takeDamage(20);
		diamondtrap.takeDamage(1);

		diamondtrap2.attack("Handsome Jack");
		diamondtrap2.beRepaired(100);
		diamondtrap2.whoAmI();
		diamondtrap2.takeDamage(1000);

		DiamondTrap	diamondtrap3 = diamondtrap2;

		diamondtrap3.takeDamage(1);
	}
	return (0);
}
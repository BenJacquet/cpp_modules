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

#include "ScavTrap.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	else
	{
		ScavTrap	scavtrap;
		ScavTrap	scavtrap2(av[1]);

		scavtrap.attack("Jack");
		scavtrap.takeDamage(9);
		for (int i = 0 ; i < 48 ; i++)
			scavtrap.beRepaired(1);
		scavtrap.attack("Handsome Jack");
		scavtrap.beRepaired(1);
		scavtrap.takeDamage(200);
		scavtrap.takeDamage(1);

		scavtrap2.attack("Handsome Jack");
		scavtrap2.beRepaired(100);
		scavtrap2.guardGate();
		scavtrap2.takeDamage(1000);

		ScavTrap	scavtrap3 = scavtrap2;
		scavtrap3.takeDamage(1);
	}
	return (0);
}
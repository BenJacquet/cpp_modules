/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:08:45 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/26 17:26:06 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "FragTrap.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	else
	{
		FragTrap	Fragtrap;
		FragTrap	Fragtrap2(av[1]);

		Fragtrap.attack("Jack");
		Fragtrap.takeDamage(9);
		Fragtrap.attack("Handsome Jack");
		Fragtrap.beRepaired(1);
		Fragtrap.takeDamage(20);
		Fragtrap.takeDamage(1);

		Fragtrap2.attack("Handsome Jack");
		Fragtrap2.beRepaired(100);
		Fragtrap2.highFiveGuys();
		Fragtrap2.takeDamage(1000);

		FragTrap	Fragtrap3 = Fragtrap2;
		Fragtrap3.takeDamage(1);
	}
	return (0);
}
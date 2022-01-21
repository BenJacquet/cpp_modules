/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:16:41 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/21 18:18:32 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*glenn = newZombie("Glenn");
	Zombie	*merle = newZombie("Merle");
	Zombie	*shane = newZombie("Shane");
	std::cout << "0" << std::endl;
	randomChump("Random zombie");
	glenn->announce();
	delete glenn;
	merle->announce();
	delete merle;
	shane->announce();
	delete shane;
	randomChump("Random zombie 2");
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:03:55 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/15 22:30:40 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	{
		std::cout << "TESTS PERSO" << std::endl;
		Character	zack("Zack");
		Character	tifa("Tifa");
		Character	reno("Reno");

		Ice			*ice = new Ice();
		Cure		*cure = new Cure();

		Ice			*ice2 = ice->clone();
		Cure		*cure2 = cure->clone();
		Cure		*cure3 = cure->clone();


		ice->use(reno);
		zack.equip(ice);
		zack.use(0, reno);
		zack.equip(cure);
		zack.use(1, tifa);

		Character	cloud(zack);
		cloud.setName("Cloud");
		tifa = cloud;
		tifa.setName("Tifa");
		tifa.equip(cure);
		tifa.use(0, zack);
		tifa.equip(ice2);
		tifa.use(0, reno);
		tifa.equip(cure2);
		tifa.equip(cure3);
		cloud.equip(cure3);
		std::cout << std::endl << zack;
		std::cout << std::endl << cloud;
		std::cout << std::endl << tifa << std::endl;
	}
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	return (0);
}
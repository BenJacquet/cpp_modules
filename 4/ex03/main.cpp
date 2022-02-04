/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:03:55 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/04 10:24:54 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	Character	cloud("Cloud");
	Character	tifa("Tifa");
	Character	reno("Reno");
	Ice			ice("ice");
	Cure		cure("cure");

	// Ice	*ice2 = ice.clone();
	// ice2->use();
	// char1.equip(ice);
	// char1.use(0, reno);
	// char1.equip(cure);
	// char1.use(1, tifa);

	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	// tmp = src->createMateria("ice");
	me->equip(tmp);
	// tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	// delete src;

	return (0);
}
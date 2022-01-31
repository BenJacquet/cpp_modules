/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:03:55 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/31 16:31:10 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"

int main()
{
	ICharacter	char1("Cloud");
	Ice			ice("ice");
	Cure		cure("cure")

	char1.equip(ice);
	char1.use(0, "Reno");
	char1.equip(cure);
	char1.use(1, "Tifa");
	return (0);
}
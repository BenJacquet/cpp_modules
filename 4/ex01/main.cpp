/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:04:06 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/28 17:59:15 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int		main(int ac, char **av)
{
	Animal *animals[6];

	for (int i = 0 ; i < 3 ; i++)
		animals[i] = new Cat();
	for (int i = 3 ; i < 6 ; i++)
		animals[i] = new Dog();
	for (int i = 0 ; i < 6 ; i++)
		delete animals[i];

	Dog dog;
	std::cout << "dog's brain is stored at " << &animals[i]->_brain << ". it is a " << animals[i] << std::endl;
	return (0);
}

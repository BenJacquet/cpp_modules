/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:04:06 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/31 12:41:50 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int		main(int ac, char **av)
{
	Animal *animals[6];

	// Animal deletion test
	for (int i = 0 ; i < 3 ; i++)
		animals[i] = new Cat();
	for (int i = 3 ; i < 6 ; i++)
		animals[i] = new Dog();
	for (int i = 0 ; i < 6 ; i++)
		delete animals[i];

	// Deep copy test
	Dog dog;
	Cat cat;

	dog.getBrain().setIdea("I'm hungry!", 0);
	std::cout << dog.getBrain().getIdea(0) << std::endl;
	std::cout << "dog's brain is stored at " << &dog.getBrain() << std::endl;
	cat.getBrain().setIdea("Don't touch me.", 0);
	std::cout << cat.getBrain().getIdea(0) << std::endl;
	std::cout << "cat's brain is stored at " << &cat.getBrain() << std::endl;
	return (0);
}

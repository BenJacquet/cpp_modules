/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:04:06 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/16 11:59:06 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int		main()
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const Animal* animal = new Animal();
	const WrongAnimal* wrongcat = new WrongCat();
	const WrongAnimal* wronganimal = new WrongAnimal();

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << animal->getType() << std::endl;
	std::cout << wrongcat->getType() << std::endl;
	std::cout << wronganimal->getType() << std::endl;

	dog->makeSound();
	cat->makeSound();
	animal->makeSound();
	wrongcat->makeSound();
	wronganimal->makeSound();

	delete dog;
	delete cat;
	delete animal;
	delete wrongcat;
	delete wronganimal;
	return (0);
}

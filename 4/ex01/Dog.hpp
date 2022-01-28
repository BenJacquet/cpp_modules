/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:04:18 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/28 17:10:04 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	std::string _type;
	Brain * _brain;
public:
	Dog();
	Dog(std::string const type);
	virtual ~Dog();
	Dog & operator=(Dog & dog);
	void makeSound() const;
	std::string getType() const;
};

#endif

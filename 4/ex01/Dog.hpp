/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:04:18 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/02 11:29:39 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
	Brain & getBrain() const;
};


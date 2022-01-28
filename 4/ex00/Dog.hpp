/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:04:18 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/28 15:35:10 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
private:
	std::string _type;
public:
	Dog();
	Dog(std::string const type);
	virtual ~Dog();
	Dog & operator=(Dog & Dog);
	void makeSound() const;
	std::string getType() const;
};

#endif

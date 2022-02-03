/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:04:14 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/02 11:29:15 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string _type;
public:
	Animal();
	Animal(Animal & src);
	Animal(std::string type);
	virtual ~Animal();
	Animal & operator=(Animal & animal);
	virtual void makeSound() const;
	virtual std::string getType() const;
};

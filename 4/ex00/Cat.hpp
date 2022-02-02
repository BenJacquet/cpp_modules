/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:04:41 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/02 11:30:12 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
private:
	std::string _type;
public:
	Cat();
	Cat(std::string const type);
	virtual ~Cat();
	Cat & operator=(Cat & cat);
	void makeSound() const;
	std::string getType() const;
};

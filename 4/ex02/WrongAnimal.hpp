/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:10:49 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/02 11:28:54 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal & src);
	WrongAnimal(std::string type);
	virtual ~WrongAnimal();
	WrongAnimal & operator=(WrongAnimal & wronganimal);
	void makeSound() const;
	std::string getType() const;
};

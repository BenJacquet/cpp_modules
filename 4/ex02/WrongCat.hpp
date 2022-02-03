/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:11:06 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/02 11:29:04 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	std::string _type;
public:
	WrongCat();
	WrongCat(WrongCat & src);
	WrongCat(std::string const type);
	virtual ~WrongCat();
	WrongCat & operator=(WrongCat & wrongcat);
	void makeSound() const;
	std::string getType() const;
};

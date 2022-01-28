/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:11:06 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/28 16:11:32 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	std::string _type;
public:
	WrongCat();
	WrongCat(std::string const type);
	virtual ~WrongCat();
	WrongCat & operator=(WrongCat & WrongCat);
	void makeSound() const;
	std::string getType() const;
};

#endif

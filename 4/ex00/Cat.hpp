/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:04:41 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/28 16:06:49 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

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
	Cat & operator=(Cat & Cat);
	void makeSound() const;
	std::string getType() const;
};

#endif

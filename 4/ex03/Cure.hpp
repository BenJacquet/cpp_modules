/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:22:18 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/31 16:33:03 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure
{
protected:
	std::string _type;

public:
	Cure();
	Cure(std::string const & type);
	~Cure();
	Cure & operator=(Cure & materia);
	std::string getType() const;
	void setType(std::string const & type);
	virtual Cure* clone() const;
	virtual void use(ICharacter& target);
};

#endif
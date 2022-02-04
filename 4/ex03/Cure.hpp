/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:22:18 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/04 09:42:46 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Character.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
protected:
	std::string _type;

public:
	Cure();
	Cure(Cure & src);
	Cure(std::string const & type);
	~Cure();
	Cure & operator=(Cure & materia);
	std::string getType() const;
	void setType(std::string const & type);
	virtual Cure* clone() const;
	virtual void use(ICharacter& target);
};
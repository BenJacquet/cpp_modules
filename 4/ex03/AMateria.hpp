/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:03:59 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/06 17:06:20 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string _type;

public:
	AMateria();
	AMateria(AMateria & src);
	AMateria(std::string const & type);
	virtual ~AMateria() = 0;
	AMateria & operator=(AMateria & materia);
	std::string getType() const;
	void setType(std::string const & type);
	virtual void use(ICharacter& target);
	virtual AMateria * clone() const;
};

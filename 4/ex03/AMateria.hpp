/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:03:59 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/15 20:52:31 by jabenjam         ###   ########.fr       */
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
	bool		_equipped;
public:
	AMateria();
	AMateria(AMateria & src);
	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria & operator=(AMateria & materia);

	std::string getType() const;
	bool getEquipped() const;
	void setType(std::string const & type);
	void setEquipped(bool equipped);
	virtual void use(ICharacter & target);
	virtual AMateria * clone() const = 0;
};

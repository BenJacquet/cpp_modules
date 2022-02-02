/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:03:59 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/02 11:27:49 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Character.hpp"

class AMateria
{
protected:
	std::string _type;

public:
	AMateria();
	AMateria(std::string const & type);
	~AMateria();
	AMateria & operator=(AMateria & materia);
	std::string getType() const;
	void setType(std::string const & type);
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

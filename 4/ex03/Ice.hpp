/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:22:50 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/04 09:42:14 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Character.hpp"

class Ice : public AMateria
{
protected:
	std::string _type;

public:
	Ice();
	Ice(Ice & src);
	Ice(std::string const & type);
	~Ice();
	Ice & operator=(Ice & materia);
	std::string getType() const;
	void setType(std::string const & type);
	virtual Ice* clone() const;
	virtual void use(ICharacter& target);
};
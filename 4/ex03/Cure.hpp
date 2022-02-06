/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:22:18 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/06 16:41:48 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Character.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure & src);
	Cure(std::string const & type);
	~Cure();
	Cure & operator=(Cure & materia);
	std::string getType() const;
	void setType(std::string const & type);
	Cure* clone() const;
	void use(ICharacter& target);
};
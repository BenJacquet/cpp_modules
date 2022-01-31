/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:22:18 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/31 13:25:19 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
#define Cure_HPP

#include <iostream>
#include <string>
#include <ICharacter.hpp>

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
	virtual Cure* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
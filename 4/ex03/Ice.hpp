/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:22:50 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/31 13:25:17 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Ice_HPP
#define Ice_HPP

#include <iostream>
#include <string>
#include <ICharacter.hpp>

class Ice
{
protected:
	std::string _type;

public:
	Ice();
	Ice(std::string const & type);
	~Ice();
	Ice & operator=(Ice & materia);
	std::string getType() const;
	void setType(std::string const & type);
	virtual Ice* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
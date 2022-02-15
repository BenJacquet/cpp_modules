/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:43:33 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/15 22:30:55 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	//std::cout << "Default constructor for MateriaSource called" << std::endl
	for (int i = 0; i < 4; i++)
		_source[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource & src)
{
	//std::cout << "Copy constructor for MateriaSource called" << std::endl
	for (int i = 0; i < 4; i++)
	{
		if (src.getSource(i))
			this->_source[i] = src.getSource(i);
		else
			this->_source[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	// std::cout << "Destructor for MateriaSource called" << std::endl
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i])
			delete this->_source[i];
	}
}

MateriaSource & MateriaSource::operator=(const MateriaSource & src)
{
	//std::cout << "Copy assignment for MateriaSource called" << std::endl
	if (this == &src)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i])
			delete this->_source[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (src.getSource(i))
			this->_source[i] = src.getSource(i)->clone();
		else
			this->_source[i] = NULL;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* source)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] == NULL && source)
		{
			this->_source[i] = source;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] && this->_source[i]->getType() == type)
			return (this->_source[i]->clone());
	}
	return (NULL);
}

AMateria* MateriaSource::getSource(int i) const
{
	return (this->_source[i]);
}
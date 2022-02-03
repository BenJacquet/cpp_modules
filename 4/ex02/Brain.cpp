/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:36:21 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/03 18:33:25 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructor called." << std::endl;
}

Brain::Brain(Brain & src)
{
	std::cout << "Copy Brain constructor called." << std::endl;
	this->_ideas[0] = src.getIdea(0);
}

Brain::Brain(std::string ideas[])
{
	std::cout << "Parametric Brain constructor called." << std::endl;
	for (int i = 0 ; ideas[i].empty() ; i++)
		this->_ideas[i] = ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

Brain & Brain::operator=(Brain & brain)
{
	for (int i = 0 ; brain._ideas[i].empty() ; i++)
		this->_ideas[i] = brain.getIdea(i);
	return (*this);
}

std::string Brain::getIdea(int const index) const
{
	return (this->_ideas[index]);
}

void Brain::setIdea(std::string const idea, int const index)
{
	this->_ideas[index] = idea;
}

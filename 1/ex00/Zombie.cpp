/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:16:30 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/21 17:18:24 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	return;
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << " was killed." << std::endl;
	return;
}

void		Zombie::set_name(std::string name)
{
	this->_name = name;
}

void		Zombie::announce( void )
{
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
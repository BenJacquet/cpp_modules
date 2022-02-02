/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:16:32 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/02 11:32:41 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string _name;
public:
	Zombie(void);
	~Zombie(void);
	void		announce( void );
	void		set_name( std::string name);
	std::string	get_name( void ) const;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

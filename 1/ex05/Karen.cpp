/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:31:25 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/26 12:12:25 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	return;
}

Karen::~Karen()
{
	return;
}

void	Karen::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return;
}

void	Karen::complain( std::string level )
{
	int				i = 0;
	void			( Karen::*functions[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string		levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4)
	{
		if (level.compare(levels[i]) == 0)
		{
			(this->*functions[i])();
			return;
		}
		i++;
	}
	return;
}

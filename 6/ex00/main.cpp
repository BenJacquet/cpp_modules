/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:19:19 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/08 15:35:09 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	displayChar(std::string str)
{
	int		code = atoi(str.c_str());
	size_t	pos = 0;

	std::cout << "char: ";
	if (isalpha(str[0]) != 0 || code < 0 || code > 127)
	{
		std::cout << "impossible" << std::endl;
		return;
	}
	else if ((pos = str.find_first_not_of("0123456789")) != std::string::npos)
	{
		if (str[pos] != '.' || (str[(str.length() - 1)] != 'f' && !isdigit(str[(str.length() - 1)])))
		{
			std::cout << "impossible" << std::endl;
			return;
		}
	}
	if (std::isprint(code))
	{
		std::cout << "'" << static_cast<char>(code) << "'" << std::endl;
	}
	else
	{
		std::cout << "Non displayable" << std::endl;
	}
}

void	displayInt(std::string str)
{
	int		code = atoi(str.c_str());
	size_t	pos = 0;

	std::cout << "int: ";
	if (isalpha(str[0]) != 0 || code < 0 || code > 127)
	{
		std::cout << "impossible" << std::endl;
		return;
	}
	else if ((pos = str.find_first_not_of("0123456789")) != std::string::npos)
	{
		if (str[pos] != '.' || (str[(str.length() - 1)] != 'f' && !isdigit(str[(str.length() - 1)])))
		{
			std::cout << "impossible" << std::endl;
			return;
		}
	}
	if (std::isprint(code))
	{
		std::cout << "'" << static_cast<char>(code) << "'" << std::endl;
	}
	else
	{
		std::cout << "Non displayable" << std::endl;
	}
}

void	displayFloat(std::string str)
{
	std::cout << "float: ";
	std::cout << static_cast<float>(strtof(str.c_str(), NULL)) << "f" << std::endl;
}

void	displayDouble(std::string str)
{
	std::cout << "double: ";
	std::cout << static_cast<double>(strtod(str.c_str(), NULL)) << std::endl;
}


int		main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: Must input one argument" << std::endl;
		return (1);
	}
	displayChar(av[1]);
	// displayInt(av[1]);
	displayFloat(av[1]);
	displayDouble(av[1]);
	return (0);
}
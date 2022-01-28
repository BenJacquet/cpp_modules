/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:58:17 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/28 12:10:42 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int		main(int ac, char **av)
{
	if (ac != 4)
		return (1);
	std::string		replace = av[1];
	replace += ".replace";
	std::string		buffer;
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	int				pos = 0;

	if (ac != 4 && s1[0] == '\0')
		return (1);
	std::ifstream	myFile(av[1]);
	if (myFile.is_open())
	{
		std::ofstream	replaceFile(replace.c_str(), std::ofstream::out | std::ofstream::trunc);
		if (replaceFile.is_open())
		{
			while (std::getline(myFile, buffer))
			{
				while ((pos = buffer.find(s1)) != std::string::npos)
				{
					buffer.erase(pos, s1.length());
					buffer.insert(pos, s2);
				}
				replaceFile << buffer;
				if (!myFile.eof())
					replaceFile << std::endl;
				buffer.clear();
			}
			replaceFile.close();
		}
		myFile.close();
	}
	else
	{
		std::cout << "File does not exist or is corrupted"<< std::endl;
		return (1);
	}
	return (0);
}

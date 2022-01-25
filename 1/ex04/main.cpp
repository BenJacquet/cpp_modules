/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:58:17 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/25 14:48:09 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int		main(int ac, char **av)
{
	if (ac != 4)
		return (1);
	std::string		replace = av[1];
	replace.append(".replace");
	std::string		buffer;
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::ifstream	myFile(av[1]);
	std::size_t		pos;

	// myFile.open(av[1], std::fstream::in | std::fstream::app);
	if (myFile.is_open())
	{
		std::ofstream	replaceFile(replace);
		replaceFile.open(replace, std::fstream::out | std::fstream::trunc);
		std::getline(myFile, buffer);
		std::cout << buffer << std::endl;
		pos = buffer.find(s1, 0);
		std::cout << pos << std::endl;
		// while (std::getline(myFile, buffer))
		// {
		// 	std::cout << buffer << std::endl;
		// 	if (pos == std::string::npos)
		// 		std::cout << "did not find any match" << std::endl;
		// 	else 
		// 		std::cout << "found a match at position " << pos << std::endl;
		// 	while ((pos = buffer.find(s1, 0)))
		// 	{
		// 		buffer.erase(pos, s1.length());
		// 		buffer.insert(pos, s2);
		// 	}
		// 	replaceFile << buffer;
		// 	buffer.clear();
		// }
		replaceFile.close();
	}
	else
		std::cout << "unable to open file"<< std::endl;
	myFile.close();
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:13:11 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/14 15:15:52 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "NotFound.hpp"
#include <stdlib.h>

int main(int ac , char **av)
{
	if (ac != 2 || isalpha(av[1][0]) != 0)
		return (1);
	std::vector<int> vect(25, 0);
	std::vector<int>::const_iterator it = vect.begin();
	std::vector<int>::const_iterator end = vect.end();

	for (int i = 0; it != end; ++it, i++)
		vect[i] = i;
	it = vect.begin();;
	std::cout << "ALL VECTOR MEMBERS:" << std::endl;
	for (int i = 0; it != end; ++it, i++)
		std::cout << "[" << i << "] " << *it << std::endl;
	std::cout << std::endl << "OCCURENCE FOUND:" << std::endl;
	try
	{
		::easyfind(vect, atoi(av[1]));
	}
	catch (NotFound & notfound)
	{
		std::cout << notfound.what() << std::endl;
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:43:25 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/10 12:39:48 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	ft_toupper(char & c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
}

void	ft_tolower(char & c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
}

void	ft_multiplybyfive(int & i)
{
	i *= 5;
}

void	ft_dividebyfive(int & i)
{
	i /= 5;
}


int		main()
{
	std::string	letters = "abcdefghijklmnopqrstuvwxyz";
	int			numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int			len = 9;

	std::cout << std::endl << "Letters before iter : " << letters << std::endl;
	iter(letters, letters.length(), ::ft_toupper);
	std::cout << std::endl << "Letters after iter with ft_toupper : " << letters << std::endl;
	iter(letters, letters.length(), ::ft_tolower);
	std::cout << std::endl << "Letters after iter with ft_tolower : " << letters << std::endl;

	std::cout << std::endl << "numbers before iter : "<< std::endl;
	for (int i = 0; i < len; i++)
		std::cout << "\"" << numbers[i] << "\",";
	iter(numbers, 9, ::ft_multiplybyfive);
	std::cout << std::endl << std::endl << "numbers after iter with ft_multiplybyfive: "<< std::endl;
	for (int i = 0; i < len; i++)
		std::cout << "\"" << numbers[i] << "\",";
	iter(numbers, 9, ::ft_dividebyfive);
	std::cout << std::endl << std::endl << "numbers after iter with ft_dividebyfive: "<< std::endl;
	for (int i = 0; i < len; i++)
		std::cout << "\"" << numbers[i] << "\",";
	std::cout << std::endl;
	return (0);
}
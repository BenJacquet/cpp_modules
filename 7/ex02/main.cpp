/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:27:31 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/10 14:25:24 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main()
{
	Array<int>			ints(5);
	Array<int>			ints2(ints);
	Array<int>			ints3(2);
	Array<float>		floats(5);
	Array<double>		doubles(5);
	Array<char>			chars(5);
	Array<std::string>	strings(5);

	std::cout << "INTS2 :" << std::endl << ints2 << std::endl;
	std::cout << "INTS3 :" << std::endl << ints3 << std::endl;
	ints3 = ints2;
	std::cout << "INTS3 :" << std::endl << ints3 << std::endl;
	std::cout << "INTS :" << std::endl << ints << std::endl;
	std::cout << "FLOATS :" << std::endl << floats << std::endl;
	std::cout << "DOUBLES :" << std::endl << doubles << std::endl;
	std::cout << "CHARS :" << std::endl << chars << std::endl;
	std::cout << "STRINGS :" << std::endl << strings;
	return (0);
}
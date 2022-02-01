/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:19:47 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/01 15:14:40 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main()
{
	Bureaucrat bob("Bob", 1);
	Bureaucrat bobby("Bobby", 0);
	Bureaucrat roy("Roy", 150);
	Bureaucrat robby("Robby", 151);

	std::cout << bob << std::endl;
	std::cout << roy << std::endl;
	std::cout << bobby << std::endl;
	std::cout << robby << std::endl;
	bob++;
	roy--;
	bobby--;
	robby++;
	std::cout << bob << std::endl;
	std::cout << roy << std::endl;
	std::cout << bobby << std::endl;
	std::cout << robby << std::endl;
	return (0);
}
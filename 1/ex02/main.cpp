/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:13:23 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/21 18:28:48 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "ADDRESSES OF THE VARIABLES:" << std::endl
	<< "string address= " << &string << std::endl
	<< "stringPTR address= " << &stringPTR << std::endl
	<< "stringREF address= " << &stringREF << std::endl  << std::endl
	<< "VALUES OF THE VARIABLES:" << std::endl
	<< "string value= "<< string << std::endl
	<< "stringPTR value= "<< stringPTR << std::endl
	<< "stringREF value= "<< stringREF << std::endl;
	return (0);
}
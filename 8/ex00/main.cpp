/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:13:11 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/10 17:03:39 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> vect(10, 0);
	std::vector<int>::const_iterator it = vect.begin();
	std::vector<int>::const_iterator end = vect.end();

	vect.assign(10, 20);
	// for (int i = 0; it != end; ++it, i++)

	for (; it != end; ++it)
		std::cout << *it << std::endl;
	// std::cout << ::easyfind(vect, 3);
	return (0);
}
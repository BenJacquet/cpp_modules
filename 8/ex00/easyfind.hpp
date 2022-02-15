/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:13:55 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/15 11:08:32 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <iterator>
#include "NotFound.hpp"

template <typename T> void easyfind(std::vector<T> & vect, const int to_find)
{
	typename std::vector<T>::const_iterator	it = vect.begin();
	typename std::vector<T>::const_iterator	end = vect.end();

	for (int i = 0; it != end; it++, i++)
	{
		if (*it == to_find)
		{
			std::cout << "[" << i << "] " << *it << std::endl;
			return;
		}
	}
	throw (NotFound());
	return;
}
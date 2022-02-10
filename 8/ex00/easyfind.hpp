/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:13:55 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/10 16:53:50 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <iterator>

template <typename T> T * easyfind(std::vector<T> & vect, const int to_find)
{
	typename std::vector<T>::const_iterator	it = vect.begin();
	typename std::vector<T>::const_iterator	end = vect.end();

	for (;it != end; ++it)
	{
		if (*it == to_find)
			return (&(*it));
	}
	return (NULL);
}
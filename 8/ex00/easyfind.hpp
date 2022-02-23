/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:13:55 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/23 11:48:59 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include "NotFound.hpp"

template <typename T> void easyfind(std::vector<T> & vect, const int to_find)
{
	typename std::vector<T>::iterator	end = vect.end();
	typename std::vector<T>::iterator	found = std::find(vect.begin(), end, to_find);

	if (found != end)
	{
		std::cout << *found << std::endl;
		return;
	}
	throw (NotFound());
	return;
}
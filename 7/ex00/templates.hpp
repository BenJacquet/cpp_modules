/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:57:22 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/09 17:43:45 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T> T const &	max(T const & x, T const & y)
{
	return (x >= y ? x : y);
}

template<typename T> T const &	min(T const & x, T const & y)
{
	return (x <= y ? x : y);
}

template<typename T> void	swap(T & x, T & y)
{
	T	tmp;

	tmp = x;
	x = y;
	y = tmp;
}
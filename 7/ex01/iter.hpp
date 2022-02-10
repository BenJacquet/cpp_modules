/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:43:22 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/10 12:08:51 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template<typename PTR, typename FUN> void iter(PTR & tab, const int len, const FUN function)
{
	if (len <= 0)
		return;
	for (int i = 0; i < len ; i++)
		function(tab[i]);
}
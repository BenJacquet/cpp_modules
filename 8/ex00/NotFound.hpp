/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NotFound.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:33:39 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/14 13:39:10 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>

class NotFound : public std::exception
{
	public:
		virtual const char* what() const throw();
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NotSpan.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:31:20 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/14 15:32:14 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>

class NotSpan : public std::exception
{
	public:
		virtual const char* what() const throw();
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:58:24 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/01 15:06:36 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooLowException.hpp"

GradeTooLowException::GradeTooLowException()
{
	this->_msg = "grade is too low...";
}

GradeTooLowException::~GradeTooLowException()
{
	
}

std::string GradeTooLowException::getMessage()
{
	return (this->_msg);
}
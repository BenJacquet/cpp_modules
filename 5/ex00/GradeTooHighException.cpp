/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:58:57 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/01 15:06:26 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GradeTooHighException.hpp"

GradeTooHighException::GradeTooHighException()
{
	this->_msg = "grade is too high!";
}

GradeTooHighException::~GradeTooHighException()
{
	
}

std::string GradeTooHighException::getMessage()
{
	return (this->_msg);
}
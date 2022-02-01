/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooLowException.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:55:21 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/01 15:51:19 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADETOOLOWEXCEPTION_HPP
#define GRADETOOLOWEXCEPTION_HPP

#include <exception>
#include <string>

class GradeTooLowException : public std::exception
{
private:
	std::string _msg;
public:
	GradeTooLowException();
	~GradeTooLowException();
	std::string getMessage();
};

#endif
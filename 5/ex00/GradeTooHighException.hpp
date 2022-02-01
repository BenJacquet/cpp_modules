/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:55:55 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/01 15:51:29 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADETOOHIGHEXCEPTION_HPP
#define GRADETOOHIGHEXCEPTION_HPP

#include <exception>
#include <string>

class GradeTooHighException : public std::exception
{
private:
	std::string _msg;
public:
	GradeTooHighException();
	~GradeTooHighException();
	std::string getMessage();
};

#endif
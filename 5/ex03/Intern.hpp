/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:40:24 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/17 11:14:59 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Form;

class Intern
{
	public:
		Intern();
		Intern(Intern & intern);
		~Intern();
		Intern & operator=(Intern & intern);
		Form * makeForm(std::string name, std::string target);
		Form * generateShrubbery(std::string target);
		Form * generateRobotomy(std::string target);
		Form * generatePresidential(std::string target);
};
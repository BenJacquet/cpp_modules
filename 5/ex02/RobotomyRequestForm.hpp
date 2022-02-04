/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:15:07 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/04 18:48:09 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string _target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm & src);
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm & operator=(RobotomyRequestForm & src);
	void execute(Bureaucrat const & executor);
	void robotomize();
	std::string getTarget() const;
};
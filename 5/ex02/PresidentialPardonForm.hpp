/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:15:04 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/04 18:05:01 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form
{
private:
	std::string _target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm & src);
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	PresidentialPardonForm & operator=(PresidentialPardonForm & src);
	void execute(Bureaucrat const & executor);
	void pardon();
	std::string getTarget() const;
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:06:53 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/19 16:19:52 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/contact.class.hpp"
#include "../incs/phonebook.class.hpp"

Contact::Contact(void)
{
	this->index = 0;
	this->first_name = NULL;
	this->last_name = NULL;
	this->nickname = NULL;
	this->phone = NULL;
	this->secret = NULL;
	// std::cout << "Constructor called" << std::endl;
	return;
}

Contact::~Contact(void)
{
	// std::cout << "Destructor called" << std::endl;
	return;
}
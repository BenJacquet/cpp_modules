/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:06:53 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/20 18:00:15 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/contact.class.hpp"
#include "../incs/phonebook.class.hpp"


Contact::Contact(void)
{
	this->_empty = true;
	return;
}

Contact::~Contact(void)
{
	return;
}

std::string	Contact::truncate(std::string data, int maxchars)
{
	if (data.length() <= maxchars)
		return (data);
	else
		return (data.substr(0, maxchars - 1) + ".");
}

void	Contact::set_first_name(std::string data)
{
	if (data.length() == 0)
		this->_first_name = "EMPTY";
	else
		this->_first_name = data;
}

void	Contact::set_last_name(std::string data)
{
	if (data.length() == 0)
		this->_last_name = "EMPTY";
	else
		this->_last_name = data;
}

void	Contact::set_nickname(std::string data)
{
	if (data.length() == 0)
		this->_nickname = "EMPTY";
	else
		this->_nickname = data;
}

void	Contact::set_phone(std::string data)
{
	if (data.length() == 0)
		this->_phone = "EMPTY";
	else
		this->_phone = data;
}

void	Contact::set_secret(std::string data)
{
	if (data.length() == 0)
		this->_secret = "EMPTY";
	else
		this->_secret = data;
}

void	Contact::add(void)
{
	std::string		input;

	std::cout << "Please input your first name :" << std::endl;
	std::getline(std::cin, input);
	this->set_first_name(input);
	input.clear();
	// std::cin.clear();
	// std::cin.ignore(1000, '\n');
	std::cout << "Please input your last name :" << std::endl;
	std::getline(std::cin, input);
	this->set_last_name(input);
	input.clear();
	// std::cin.clear();
	// std::cin.ignore(1000, '\n');
	std::cout << "Please input your nickname :" << std::endl;
	std::getline(std::cin, input);
	this->set_nickname(input);
	input.clear();
	// std::cin.clear();
	// std::cin.ignore(1000, '\n');
	std::cout << "Please input your phone number :" << std::endl;
	std::getline(std::cin, input);
	this->set_phone(input);
	input.clear();
	// std::cin.clear();
	// std::cin.ignore(1000, '\n');
	std::cout << "Please input your darkest secret :" << std::endl;
	std::getline(std::cin, input);
	this->set_secret(input);
	input.clear();
	// std::cin.clear();
	// std::cin.ignore(1000, '\n');
	this->_empty = this->check_empty();
	return;
}

bool	Contact::get_empty(void) const
{
	return (this->_empty);
}

bool	Contact::check_empty(void) const
{
	bool	empty = true;
	if (this->_first_name.compare("EMPTY") != 0)
		empty = false;
	if (this->_last_name.compare("EMPTY") != 0)
		empty = false;
	if (this->_nickname.compare("EMPTY") != 0)
		empty = false;
	if (this->_phone.compare("EMPTY") != 0)
		empty = false;
	if (this->_secret.compare("EMPTY") != 0)
		empty = false;
	return (empty);
}

void	Contact::get_data(int id) const
{
	// std::setfill(" ");
	std::cout << std::setw(10) << id << "|" <<
	std::setw(10) << this->truncate(this->_first_name, 10) << "|" <<
	std::setw(10) << this->truncate(this->_last_name, 10) << "|" <<
	std::setw(10) << this->truncate(this->_nickname, 10) << std::endl;
	return;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:06:53 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/21 16:11:28 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Contact.class.hpp"

Contact::Contact(void)
{
	this->_empty = true;
	return;
}

Contact::~Contact(void)
{
	return;
}

std::string	Contact::get_first_name(void) const
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (this->_last_name);
}

std::string	Contact::get_nickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::get_phone(void) const
{
	return (this->_phone);
}

std::string	Contact::get_secret(void) const
{
	return (this->_secret);
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

void	Contact::set_empty(void)
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
	this->_empty = empty;
}

void	Contact::replace(Contact new_contact)
{
	this->set_first_name(new_contact.get_first_name());
	this->set_last_name(new_contact.get_last_name());
	this->set_nickname(new_contact.get_nickname());
	this->set_phone(new_contact.get_phone());
	this->set_secret(new_contact.get_secret());
	this->set_empty();
}

bool	Contact::add(void)
{
	std::string		input;
	Contact			new_contact;

	input.clear();
	std::cout << "Input your first name :" << std::endl;
	std::getline(std::cin, input);
	new_contact.set_first_name(input);
	input.clear();
	std::cout << "Input your last name :" << std::endl;
	std::getline(std::cin, input);
	new_contact.set_last_name(input);
	input.clear();
	std::cout << "Input your nickname :" << std::endl;
	std::getline(std::cin, input);
	new_contact.set_nickname(input);
	input.clear();
	std::cout << "Input your phone number :" << std::endl;
	std::getline(std::cin, input);
	new_contact.set_phone(input);
	input.clear();
	std::cout << "Input your darkest secret :" << std::endl;
	std::getline(std::cin, input);
	new_contact.set_secret(input);
	input.clear();
	new_contact.set_empty();
	if (new_contact.get_empty() == true)
		return (false);
	this->replace(new_contact);
	return (true);
}

bool	Contact::get_empty(void) const
{
	return (this->_empty);
}

void	Contact::get_data_short(int id) const
{
	std::cout << std::setfill(' ') << std::setw(10) << id + 1 << " | " <<
	std::setfill(' ') << std::setw(10) << truncate(this->_first_name, 10) << " | " <<
	std::setfill(' ') << std::setw(10) << truncate(this->_last_name, 10) << " | " <<
	std::setfill(' ') << std::setw(10) << truncate(this->_nickname, 10) << std::endl;
	return;
}

void	Contact::get_data_full(int index) const
{
	std::cout << std::endl <<
	"Contact number : " << index + 1 << std::endl <<
	"First name : " << this->_first_name << std::endl <<
	"Last name : " << this->_last_name << std::endl <<
	"Nickname : " << this->_nickname << std::endl <<
	"Phone number : " << this->_phone << std::endl <<
	"Darkest secret : " << this->_secret << std::endl << std::endl;
	return;
}
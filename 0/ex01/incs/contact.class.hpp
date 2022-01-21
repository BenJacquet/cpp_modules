/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:06:54 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/21 14:16:40 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP

#define CONTACT_CLASS_HPP

#include <iostream>
#include <string.h>
#include <iomanip>

class Contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone;
	std::string	_secret;
	bool		_empty;

public:
	Contact(void);
	~Contact(void);
	void		set_first_name(std::string data);
	void		set_last_name(std::string data);
	void		set_nickname(std::string data);
	void		set_phone(std::string data);
	void		set_secret(std::string data);
	void		set_empty(void);
	std::string	get_first_name(void) const;
	std::string	get_last_name(void) const;
	std::string	get_nickname(void) const;
	std::string	get_phone(void) const;
	std::string	get_secret(void) const;
	bool		get_empty(void) const;
	void		get_data_short(int j) const;
	void		get_data_full(int index) const;
	bool		add(void);
	void		replace(Contact contact);
};

std::string		truncate(std::string data, int maxchars);
bool			good_index(std::string cmd, Contact *contact, int *index);

#endif
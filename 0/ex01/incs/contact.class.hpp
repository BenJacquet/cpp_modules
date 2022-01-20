/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:06:54 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/20 17:13:18 by jabenjam         ###   ########.fr       */
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
	void		add(void);
	void		set_first_name(std::string data);
	void		set_last_name(std::string data);
	void		set_nickname(std::string data);
	void		set_phone(std::string data);
	void		set_secret(std::string data);
	void		get_data(int j) const;
	bool		get_empty(void) const;
	bool		check_empty(void) const;
	std::string	truncate(std::string data, int maxchars);
};

#endif
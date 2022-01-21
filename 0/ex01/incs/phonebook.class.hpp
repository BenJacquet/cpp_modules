/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:17:00 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/21 16:01:28 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP

#define PHONEBOOK_CLASS_HPP

#include "../incs/contact.class.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	
public:
	PhoneBook(void);
	~PhoneBook(void);
	void	loop(int ac, char **av);
};

#endif
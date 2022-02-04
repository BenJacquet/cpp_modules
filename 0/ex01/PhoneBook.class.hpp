/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:17:00 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/04 09:51:33 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.class.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	
public:
	PhoneBook(void);
	~PhoneBook(void);
	void	loop(int ac, char **av);
};

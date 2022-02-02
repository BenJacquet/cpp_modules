/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:17:00 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/02 11:34:17 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "../incs/Contact.class.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	
public:
	PhoneBook(void);
	~PhoneBook(void);
	void	loop(int ac, char **av);
};

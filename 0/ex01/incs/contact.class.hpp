/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:06:54 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/19 16:21:54 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP

#define CONTACT_CLASS_HPP

class Contact
{
public:
	int			index;
	char		*first_name;
	char		*last_name;
	char		*nickname;
	char		*phone;
	char		*secret;

	Contact(void);
	~Contact(void);
};

#endif
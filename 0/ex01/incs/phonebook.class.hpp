/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:17:00 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/19 16:44:12 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP

#define PHONEBOOK_CLASS_HPP

class Phonebook
{

public:
	char	*cmd;
	Contact	contact[8];

	Phonebook(void);
	~Phonebook(void);

	void	add(Contact *contact, int i);
	void	search(Contact *contacts) const;
	void	exit(Contact *contacts);
};

#endif
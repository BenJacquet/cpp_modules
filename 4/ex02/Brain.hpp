/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:18:32 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/02 11:28:31 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Brain
{
private:
	std::string _ideas[100];
public:
	Brain();
	Brain(std::string ideas[]);
	~Brain();
	Brain & operator=(Brain & brain);
	std::string getIdea(int const index) const;
	void setIdea(std::string const idea, int const index);
};

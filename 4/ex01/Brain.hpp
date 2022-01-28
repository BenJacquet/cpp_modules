/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:18:32 by jabenjam          #+#    #+#             */
/*   Updated: 2022/01/28 17:57:11 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

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
	void setIdea(int const index, std::string const idea);
};

#endif
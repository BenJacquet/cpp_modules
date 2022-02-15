/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:44:38 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/15 16:28:48 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

MutantStack::MutantStack(/*args*/)
{
	//std::cout << "Default constructor for MutantStack called" << std::endl
}

MutantStack::MutantStack(const MutantStack & src)
{
	static_cast<void>(src);
	//std::cout << "Copy constructor for MutantStack called" << std::endl
}

MutantStack::~MutantStack() {/*std::cout << "Destructor for MutantStack called" << std::endl*/}

MutantStack & MutantStack::operator=(const MutantStack & src)
{
	//std::cout << "Copy assignment for MutantStack called" << std::endl
	static_cast<void>(src);
	if (this == &src)
		return (*this);
	return (*this);
}

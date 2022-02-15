/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:44:45 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/15 16:27:35 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

// template <typename T>
class MutantStack// : public std::stack<T>
{
	private:
		
	public:
		//CANONICAL FORM COMPONENTS
		MutantStack(/*args*/);
		MutantStack(const MutantStack & src);
		~MutantStack();
		MutantStack & operator=(const MutantStack & src);
		//OTHER COMPONENTS
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:44:45 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/16 15:24:00 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack<T> : public std::stack<T>
{
	private:
		
	public:
		//CANONICAL FORM COMPONENTS
		MutantStack(/*args*/);
		MutantStack(const MutantStack & src);
		~MutantStack();
		MutantStack & operator=(const MutantStack & src);
		//OTHER COMPONENTS
		// class iterator : public std::iterator
		// {
		// 	private:
				
		// 	public:
				
		// };
};

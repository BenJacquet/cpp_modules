/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:44:45 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/17 14:18:19 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		
	public:
		//CANONICAL FORM COMPONENTS
		MutantStack() : std::stack<T>() {};
		MutantStack(const MutantStack & src) : std::stack<T>(reinterpret_cast<std::stack<T> >(src)){};
		~MutantStack() {};
		MutantStack & operator=(const MutantStack<T> & src);
		//OTHER COMPONENTS
		typename std::stack<T>::container_type::iterator begin() {return (this->c.begin());}
		typename std::stack<T>::container_type::iterator end() {return (this->c.end());}
};
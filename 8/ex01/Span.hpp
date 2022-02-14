/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:33:04 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/14 17:48:32 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <iostream>
#include <exception>

class Span
{
private:
	unsigned int		_max;
	std::vector<int>	_span;
public:
	Span(unsigned int N);
	Span(const Span & src);
	~Span();
	Span & operator=(const Span & src);
	unsigned int getMax();
	int * copySpan();
	void addNumber(int n);
	void addNumbers(typename std::vector<int>::iterator beg, typename std::vector<int>::iterator end);
	class AlreadyFull : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class NotSpan : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:33:04 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/15 14:13:56 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>

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
	unsigned int getMax() const;
	const std::vector<int> & getSpan() const;
	void addNumber(int n);
	void addNumbers(std::vector<int>::const_iterator beg, std::vector<int>::const_iterator end);
	int shortestSpan();
	int longestSpan();
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
	class OutOfBounds : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:33:15 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/23 12:23:52 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _max(N) {}

Span::Span(const Span & src) : _max(src.getMax())
{
	std::vector<int>::const_iterator	beg = src._span.begin();
	std::vector<int>::const_iterator	end = src._span.end();

	for (; beg != end; beg++)
		this->_span.push_back(*beg);
}

Span::~Span() {}

unsigned int Span::getMax() const {return (this->_max);}

const std::vector<int> & Span::getSpan() const {return (this->_span);};

Span & Span::operator=(const Span & src)
{
	if (this == &src)
		return (*this);
	this->_span.resize(src._span.size());
	this->_max = src.getMax();

	std::vector<int>::const_iterator beg_src = src._span.begin();
	std::vector<int>::const_iterator end_src = src._span.end();
	std::vector<int>::iterator beg_dst = this->_span.begin();
	std::vector<int>::iterator end_dst = this->_span.end();

	this->_span.erase(beg_dst, end_dst);
	for (; beg_src != end_src; beg_src++, beg_dst++)
		this->_span.push_back(*beg_src);
	return (*this);
}

void Span::addNumber(int n)
{
	try
	{
		if (this->_span.size() < this->_max)
			this->_span.push_back(n);
		else
			throw Span::AlreadyFull();
	}
	catch (Span::AlreadyFull & full)
	{
		std::cerr << full.what() << std::endl;
	}
}

void Span::addNumbers(std::vector<int>::const_iterator beg, std::vector<int>::const_iterator end)
{
	try
	{
		if ((beg - this->_span.begin()) >= 0 && static_cast<unsigned long>(end - this->_span.begin()) <= this->_max)
		{
			srand(time(NULL));
			for (; beg != end; beg++)
				this->_span.push_back(static_cast<int>(random() % __INT_MAX__));
		}
		else
		{
			throw Span::OutOfBounds();
		}
	}
	catch (Span::OutOfBounds & oob)
	{
		std::cerr << oob.what() << std::endl;
	}
}

int Span::shortestSpan()
{
	try
	{
		if (this->_span.size() > 1)
		{
			int shortest = __INT_MAX__;
			std::vector<int>::const_iterator beg = this->_span.begin();
			std::vector<int>::const_iterator it = beg;
			std::vector<int>::const_iterator end = this->_span.end();

			for (; beg != end; beg++)
			{
				it = beg + 1;
				for (; it != end; it++)
				{
					if (abs(*beg - *it) < shortest)
						shortest = abs(*beg - *it);
				}
			}
			return (shortest);
		}
		else
			throw Span::NotSpan();
	}
	catch (Span::NotSpan & notspan)
	{
		std::cerr << notspan.what() << std::endl;
		return (-1);
	}
}

int Span::longestSpan()
{
	try
	{
		if (this->_span.size() > 1)
		{
			std::vector<int> tmp(this->_span.size());
			std::vector<int>::iterator beg = tmp.begin();
			copy(this->_span.begin(), this->_span.end(), beg);
			std::vector<int>::iterator end = tmp.end();
			std::sort(beg, end);
			return (*(end - 1) - *beg);
		}
		else
			throw Span::NotSpan();
	}
	catch (Span::NotSpan & notspan)
	{
		std::cerr << notspan.what() << std::endl;
		return (-1);
	}
}

const char* Span::AlreadyFull::what() const throw() {return ("Span is already full.");}

const char* Span::NotSpan::what() const throw() {return ("Not enough values to be considered a span.");}

const char* Span::OutOfBounds::what() const throw() {return ("Iterator is out of bounds.");}

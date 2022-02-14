/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:33:15 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/14 17:49:04 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _max(N) {}

Span::Span(const Span & src) : _max(src.getMax()), _size(src.getSize()), _span(src.copySpan()) {}

Span::~Span() {}

unsigned int Span::getMax() {return (this->_max);}

unsigned int Span::getSize() {return (this->_size);}

int * Span::copySpan()
{
	int		*span = new[this->_size];

	for (int i = 0; i < this->_size; i++)
		span[i] = this->_span[i];
	return (span);
}

Span & Span::operator=(const Span & src)
{
	if (*this == src)
		return (*this);
	this->_max = src.getMax();
	this->_size = src.getSize();
	this->_span = src.copySpan();
	return (*this);
}

const char* Span::AlreadyFull::what() const throw() {return ("Span is already full.");}

const char* Span::NotSpan::what() const throw() {return ("Not enough values to be considered a span.");}
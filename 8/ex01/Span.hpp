/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:33:04 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/14 17:05:21 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Span
{
private:
	unsigned int	_max;
	unsigned int	_size;
	int				*span;
public:
	Span(unsigned int N);
	Span(const Span & src);
	~Span();
	Span & operator=(const Span & src);
	unsigned int getMax();
	unsigned int getSize();
	int * copySpan();
	void addNumber(int n);
};
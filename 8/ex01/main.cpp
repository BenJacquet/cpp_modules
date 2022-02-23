/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:33:57 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/23 12:21:26 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main (int ac, char **av)
{
	{
		std::cout << "TESTS DU SUJET:" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	if (ac == 2)
	{
		std::cout << std::endl << "TESTS PERSO:" << std::endl;
		Span	span(atoi(av[1]));
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;

		std::vector<int>::const_iterator beg = span.getSpan().begin();
		std::vector<int>::const_iterator end = span.getSpan().end();
		span.addNumbers(beg, end + span.getMax());
		beg = span.getSpan().begin();
		end = span.getSpan().end();

		Span	span2(span);
		std::vector<int>::const_iterator beg2 = span2.getSpan().begin();
		std::vector<int>::const_iterator end2 = span2.getSpan().end();

		std::cout << std::endl << "SPAN CONTENT:" << std::endl;
		for (int i = 0; beg != end; beg++, i++)
			std::cout << "[" << i << "] " << span.getSpan()[i] << std::endl;

		std::cout << std::endl << "SPAN2 CONTENT:" << std::endl;
		for (int i = 0; beg2 != end2; beg2++, i++)
			std::cout << "[" << i << "] " << span2.getSpan()[i] << std::endl;
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
		span.addNumber(45);
		return (0);
	}
	return (0);
}
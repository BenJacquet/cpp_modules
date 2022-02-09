/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 10:27:35 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/09 21:18:59 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	{
		std::cout << "TESTS SUJET" << std::endl;
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}	
	{
		std::cout << std::endl << "TESTS PERSO" << std::endl;
		Fixed a(15);
		Fixed b(10);
		Fixed const c(Fixed(5.05f) * Fixed(4));

		std::cout << "a value print : " << a << std::endl;
		std::cout << "a division test" << std::endl;
		std::cout << a / b << std::endl;
		std::cout << "a value preincrementation" << std::endl;
		std::cout << ++a << std::endl;
		std::cout << "a value print : " << a << std::endl;
		std::cout << "a value postincrementation" << std::endl;
		std::cout << a++ << std::endl;
		std::cout << "a value print : " << a << std::endl << std::endl;

		std::cout << "b value print : " << b << std::endl;
		std::cout << "b value predecrementation" << std::endl;
		std::cout << --b << std::endl;
		std::cout << "b value print : " << b << std::endl;
		std::cout << "b value postdecrementation" << std::endl;
		std::cout << b-- << std::endl;
		std::cout << "b value print : " << b << std::endl << std::endl;

		std::cout << "Comparison tests" << std::endl;
		std::cout << "a value print : " << a << std::endl;
		std::cout << "b value print : " << b << std::endl;
		std::cout << "a inferior or equal to b : " << (a <= b) << std::endl;
		std::cout << "a strictly inferior to b : " << (a < b) << std::endl;
		std::cout << "a superior or equal to b : " << (a >= b) << std::endl;
		std::cout << "a strictly superior to b : " << (a > b) << std::endl;
		std::cout << "a equal to b : " << (a == b) << std::endl;
		std::cout << "a unequal to b : " << (a != b) << std::endl << std::endl;

		std::cout << Fixed::max(a, c) << std::endl;
		std::cout << Fixed::min(a, c) << std::endl;
		std::cout << c.toInt() << std::endl;
	}
	return 0;
}
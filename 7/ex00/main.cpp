/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:57:11 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/22 09:37:42 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "templates.hpp"

int	main()
{

	std::cout << "TESTS WITH INTS:" << std::endl;
	int a = 2;
	int b = 3;
	std::cout << "before swap: a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "after swap: a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::cout << std::endl << "TESTS WITH STRINGS:" << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "before swap: c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "after swap: c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl << "TESTS WITH FLOATS:" << std::endl;
	float e = 42.42;
	float f = -42.42;
	std::cout << "before swap: e = " << e << ", f = " << f << std::endl;
	::swap(e, f);
	std::cout << "after swap: e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
	return (0);
}
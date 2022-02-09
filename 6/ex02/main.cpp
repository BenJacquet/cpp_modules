/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:25:20 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/09 16:45:55 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	timeval			t;
	unsigned int	seed;

	gettimeofday(&t, NULL);
	seed = t.tv_usec;
	srand(time(NULL) + seed);

	switch ((rand() % 3) + 1)
	{
		case (1):
			std::cout << "generated a A" << std::endl;
			return (reinterpret_cast<Base*>(new A));
		case (2):
			std::cout << "generated a B" << std::endl;
			return (reinterpret_cast<Base*>(new B));
		case (3):
			std::cout << "generated a C" << std::endl;
			return (reinterpret_cast<Base*>(new C));
		default:
			return (NULL);
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Object pointer pointing to " << p << " is of type A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Object pointer pointing to " << p << " is of type B" << std::endl;
	else
		std::cout << "Object pointer pointing to " << p << " is of type C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		Base & refA = dynamic_cast<A&>(p);
		static_cast<void>(refA);
	}
	catch (std::exception const & exception)
	{
		try
		{
			Base & refB = dynamic_cast<B&>(p);
			static_cast<void>(refB);
		}
		catch (std::exception const & exception)
		{
			std::cout << "Object reference pointing to " << &p << " is of type C" << std::endl;
			return;
		}
		std::cout << "Object reference pointing to " << &p << " is of type B" << std::endl;
		return;
	}
	std::cout << "Object reference pointing to " << &p << " is of type A" << std::endl;
}

int	main()
{
	Base * first = generate();
	Base * second = generate();
	Base * third = generate();

	Base & firstRef = *first;
	Base & secondRef = *second;
	Base & thirdRef = *third;

	std::cout << first << std::endl;
	identify(first);
	identify(firstRef);
	std::cout << second << std::endl;
	identify(second);
	identify(secondRef);
	std::cout << third << std::endl;
	identify(third);
	identify(thirdRef);

	delete first;
	delete second;
	delete third;
	return (0);
}
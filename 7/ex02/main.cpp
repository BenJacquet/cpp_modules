/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:27:31 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/10 15:34:49 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define MAX_VAL 750

int		main()
{
	{
		// MY TESTS
		Array<int>			ints(5);
		Array<int>			ints2(ints);
		Array<int>			ints3(2);
		Array<float>		floats(5);
		Array<double>		doubles(5);
		Array<char>			chars(5);
		Array<std::string>	strings(5);

		std::cout << "INTS :" << std::endl << ints << std::endl;
		std::cout << "INTS2 :" << std::endl << ints2 << std::endl;
		std::cout << "INTS3 BEFORE USING = OPERATOR :" << std::endl << ints3 << std::endl;
		ints3 = ints2;
		std::cout << "INTS3 AFTER USING = OPERATOR :" << std::endl << ints3 << std::endl;
		std::cout << "FLOATS :" << std::endl << floats << std::endl;
		std::cout << "DOUBLES :" << std::endl << doubles << std::endl;
		std::cout << "CHARS :" << std::endl << chars << std::endl;
		std::cout << "STRINGS :" << std::endl << strings;
	}
	{
		// SUBJECT TESTS
		Array<int> numbers(MAX_VAL);
    	int* mirror = new int[MAX_VAL];
    	srand(time(NULL));
    	for (int i = 0; i < MAX_VAL; i++)
    	{
    	    const int value = rand();
    	    numbers[i] = value;
    	    mirror[i] = value;
    	}
    	//SCOPE
    	{
    	    Array<int> tmp = numbers;
    	    Array<int> test(tmp);
    	}
	
    	for (int i = 0; i < MAX_VAL; i++)
    	{
    	    if (mirror[i] != numbers[i])
    	    {
    	        std::cerr << "didn't save the same value!!" << std::endl;
    	        return 1;
    	    }
    	}
    	try
    	{
    	    numbers[-2] = 0;
    	}
    	catch(const std::exception& e)
    	{
    	    std::cerr << e.what() << '\n';
    	}
    	try
    	{
    	    numbers[MAX_VAL] = 0;
    	}
    	catch(const std::exception& e)
    	{
    	    std::cerr << e.what() << '\n';
    	}
    	for (int i = 0; i < MAX_VAL; i++)
    	{
    	    numbers[i] = rand();
    	}
    	delete [] mirror;
    	return 0;
	}
}
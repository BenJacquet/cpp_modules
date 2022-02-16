/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:27:31 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/16 14:24:37 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "cstdlib"
#define MAX_VAL 30

int		main()
{
	{
		std::cout << "TESTS PERSO" << std::endl;
		Array<int>			ints(5);
		Array<int>			ints2(ints);
		Array<int>			ints3(2);
		Array<float>		floats(5);
		Array<double>		doubles(5);
		Array<char>			chars(5);
		Array<std::string>	strings(5);
		Array<Array<int> >	array(5);

		for (int i = 0; i < 5; i++)
			ints[i] = i;

		std::cout << "INTS :" << std::endl << ints << std::endl;
		std::cout << "INTS2 :" << std::endl << ints2 << std::endl;
		std::cout << "INTS3 BEFORE USING = OPERATOR :" << std::endl << ints3 << std::endl;
		ints3 = ints;
		std::cout << "INTS3 AFTER USING = OPERATOR :" << std::endl << ints3 << std::endl;
		std::cout << "FLOATS :" << std::endl << floats << std::endl;
		std::cout << "DOUBLES :" << std::endl << doubles << std::endl;
		std::cout << "CHARS :" << std::endl << chars << std::endl;
		std::cout << "STRINGS :" << std::endl << strings << std::endl;
		std::cout << "ARRAY :" << std::endl << array;
	}
	{
		std::cout << std::endl << "TESTS SUJET" << std::endl;
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
		std::cout << std::endl << "Numbers content:" << std::endl;
		for (int i = 0; i < MAX_VAL; i++)
			std::cout << "[" << i << "] - " << numbers[i] << std::endl;
		std::cout << std::endl << "Mirror content:" << std::endl;
		for (int i = 0; i < MAX_VAL; i++)
			std::cout << "[" << i << "] - " << mirror[i] << std::endl;
    	delete [] mirror;
    	return 0;
	}
}
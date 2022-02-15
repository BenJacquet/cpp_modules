/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:43:25 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/15 16:57:19 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::stack<int> stack;

	for (int i = 0; i < 10; i++)
		stack.push(i);

	std::cout << "Stack size = " << stack.size() << std::endl;
	std::cout << "Stack top element = " << stack.top() << std::endl;
	// std::cout << "Stack back element = " << stack.back() << std::endl;

	std::cout << std::endl << "Stack content:" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << stack.top() << std::endl;
		stack.pop();
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:43:25 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/17 16:29:58 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> stack;

	for (int i = 0; i < 10; i++)
		stack.push(i);

	MutantStack<int>::stack<int>::container_type::iterator beg = stack.begin();
	MutantStack<int>::stack<int>::container_type::iterator end = stack.end();

	std::cout << "Stack size = " << stack.size() << std::endl;
	std::cout << "Stack beg = " << "(" << &beg << ") - " << *beg << std::endl;
	std::cout << "Stack (end - 1)= " << "(" << &end - 1 << ") - " << *(end - 1) << std::endl;

	std::cout << std::endl << "Stack content:" << std::endl;
	for (int i = 0; beg != end; beg++, i++)
	{
		std::cout << "[" << i << "] - " << *beg << std::endl;
	}
	return (0);
}
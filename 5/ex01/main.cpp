/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:19:47 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/04 14:11:02 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main()
{
	Bureaucrat bob("Bob", 1);
	Bureaucrat roy("Roy", 150);
	Bureaucrat george("George", 76);

	std::cout << std::endl << "BUREAUCRAT INFO TEST" << std::endl;
	std::cout << bob << std::endl;
	std::cout << roy << std::endl;
	std::cout << george << std::endl;

	std::cout << std::endl << "INVALID FORM TEST" << std::endl;
	Form invalid("invalid", 0, 0);
	Form invalid2("invalid2", 151, 151);
	Form topsecret("topsecret", 1, 1);
	Form average("average", 75, 75);

	std::cout << std::endl << "FORM INFO TEST" << std::endl;
	std::cout << topsecret << std::endl;
	std::cout << average << std::endl;

	std::cout << "INVALID SIGNING TEST" << std::endl;
	invalid.beSigned(bob);
	invalid2.beSigned(bob);

	std::cout << std::endl << "TOPSECRET SIGNING TEST" << std::endl;
	topsecret.beSigned(bob);
	topsecret.beSigned(roy);
	topsecret.beSigned(george);

	std::cout << std::endl << "AVERAGE SIGNING TEST" << std::endl;
	average.beSigned(bob);
	average.beSigned(roy);
	average.beSigned(george);

	std::cout << std::endl << "AVERAGE SIGNING TEST AFTER GEORGE POWERED UP" << std::endl;
	george++;
	average.beSigned(george);
	std::cout << std::endl;
	return (0);
}
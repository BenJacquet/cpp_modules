/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:19:47 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/06 21:41:38 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int		main()
{
	ShrubberyCreationForm shrubbery("shrubbery");
	RobotomyRequestForm robotomy("Alex Murphy");
	PresidentialPardonForm pardon("Ford Prefect");

	shrubbery.makeShrubbery();
	robotomy.robotomize();
	pardon.pardon();

	Bureaucrat bob("Bob", 1);
	Bureaucrat roy("Roy", 150);
	Bureaucrat george("George", 76);

	std::cout << std::endl << "BUREAUCRAT INFO TEST" << std::endl;
	std::cout << bob << std::endl;
	std::cout << roy << std::endl;
	std::cout << george << std::endl;

	std::cout << std::endl << "FORM INFO TEST" << std::endl;
	std::cout << shrubbery << std::endl;
	std::cout << robotomy << std::endl;
	std::cout << pardon << std::endl;

	std::cout << "SHRUBBERY EXECUTE BEFORE SIGNING TEST" << std::endl;
	shrubbery.execute(bob);
	shrubbery.execute(roy);
	shrubbery.execute(george);

	std::cout << std::endl << "SIGNING ALL TESTS BY BOB" << std::endl;
	shrubbery.beSigned(bob);
	robotomy.beSigned(bob);
	pardon.beSigned(bob);

	std::cout << std::endl << "SHRUBBERY EXECUTE TEST" << std::endl;
	shrubbery.execute(bob);
	shrubbery.execute(roy);
	shrubbery.execute(george);

	std::cout << std::endl << "SHRUBBERY EXECUTEFORM TEST" << std::endl;
	bob.executeForm(shrubbery);
	roy.executeForm(shrubbery);
	george.executeForm(shrubbery);

	std::cout << std::endl << "ROBOTOMY EXECUTE TEST" << std::endl;
	robotomy.execute(bob);
	robotomy.execute(roy);
	robotomy.execute(george);

	std::cout << std::endl << "ROBOTOMY EXECUTEFORM TEST" << std::endl;
	bob.executeForm(robotomy);
	roy.executeForm(robotomy);
	george.executeForm(robotomy);

	std::cout << std::endl << "PARDON EXECUTE TEST" << std::endl;
	pardon.execute(bob);
	pardon.execute(roy);
	pardon.execute(george);

	std::cout << std::endl << "PARDON EXECUTEFORM TEST" << std::endl;
	bob.executeForm(pardon);
	roy.executeForm(pardon);
	george.executeForm(pardon);

	return (0);
}
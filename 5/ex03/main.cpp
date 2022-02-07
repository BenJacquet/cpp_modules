/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:19:47 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/07 14:41:19 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int		main()
{
	Intern	timmie;

	Bureaucrat bob("Bob", 1);
	Bureaucrat roy("Roy", 150);
	Bureaucrat george("George", 76);

	std::cout << std::endl << "FORM CREATION TEST" << std::endl;
	Form * shrubbery = timmie.makeForm("shrubbery creation", "shrubbery");
	Form * robotomy = timmie.makeForm("robotomy request", "Alex Murphy");
	Form * pardon = timmie.makeForm("presidential pardon", "Ford Prefect");
	Form * unreadable = timmie.makeForm("unreadable form name", "unreadable target");


	std::cout << std::endl << "BUREAUCRAT INFO TEST" << std::endl;
	std::cout << bob << std::endl;
	std::cout << roy << std::endl;
	std::cout << george << std::endl;

	std::cout << std::endl << "FORM INFO TEST" << std::endl;
	std::cout << shrubbery << std::endl << *shrubbery << std::endl;
	std::cout << robotomy << std::endl << *robotomy << std::endl;
	std::cout << pardon << std::endl << *pardon << std::endl;
	std::cout << "Invalid form address : " << unreadable << std::endl << std::endl;


	std::cout << "SHRUBBERY EXECUTE BEFORE SIGNING TEST" << std::endl;
	shrubbery->execute(bob);
	shrubbery->execute(roy);
	shrubbery->execute(george);

	std::cout << std::endl << "SIGNING ALL TESTS BY BOB" << std::endl;
	shrubbery->beSigned(bob);
	robotomy->beSigned(bob);
	pardon->beSigned(bob);

	std::cout << std::endl << "SHRUBBERY EXECUTE TEST" << std::endl;
	shrubbery->execute(bob);
	shrubbery->execute(roy);
	shrubbery->execute(george);

	std::cout << std::endl << "SHRUBBERY EXECUTEFORM TEST" << std::endl;
	bob.executeForm(*shrubbery);
	roy.executeForm(*shrubbery);
	george.executeForm(*shrubbery);

	std::cout << std::endl << "ROBOTOMY EXECUTE TEST" << std::endl;
	robotomy->execute(bob);
	robotomy->execute(roy);
	robotomy->execute(george);

	std::cout << std::endl << "ROBOTOMY EXECUTEFORM TEST" << std::endl;
	bob.executeForm(*robotomy);
	roy.executeForm(*robotomy);
	george.executeForm(*robotomy);

	std::cout << std::endl << "PARDON EXECUTE TEST" << std::endl;
	pardon->execute(bob);
	pardon->execute(roy);
	pardon->execute(george);

	std::cout << std::endl << "PARDON EXECUTEFORM TEST" << std::endl;
	bob.executeForm(*pardon);
	roy.executeForm(*pardon);
	george.executeForm(*pardon);

	delete shrubbery;
	delete robotomy;
	delete pardon;
	return (0);
}
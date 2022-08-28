/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:29:04 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/28 17:29:04 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	ft_present(void);
void	ft_test_form_ShrubberyCreation(void);
void	ft_test_form_RobotomyRequest(void);
void	ft_test_form_PresidentialPardon(void);

int	main(void)
{
	int	menu;

	ft_present();

	std::cout << WHITE "Which form do you want to test ?" << std::endl;
	std::cout << "   1 - ShrubberyCreation" << std::endl;
	std::cout << "   2 - RobotomyRequest" << std::endl;
	std::cout << "   3 - PresidentialPardon" << std::endl;
	std::cout << "     - Other values to quit" << std::endl;
	std::cout << ">> " GREEN;
	std::cin >> menu;
	std::cout << "" NONE << std::endl;

	switch (menu)
	{
		case 1:
			ft_test_form_ShrubberyCreation();
			break;
		case 2:
			ft_test_form_RobotomyRequest();
			break;
		case 3:
			ft_test_form_PresidentialPardon();
			break;
		default:
			std::cout << " Bye " << std::endl;
	}

	return (0);
}

/* ********************************************************************************************************* */
/* ********************************************************************************************************* */

void ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "              _                             _" << std::endl;
	std::cout << "      /\\     | |                           (_)" << std::endl;
	std::cout << "     /  \\    | |__      _ __ ___     __ _   _   ___     _ __     ___    _ __" << std::endl;
	std::cout << "    / /\\ \\   | '_ \\    | '_ ` _ \\   / _` | | | / __|   | '_ \\   / _ \\  | '_ \\" << std::endl;
	std::cout << "   / ____ \\  | | | |   | | | | | | | (_| | | | \\__ \\   | | | | | (_) | | | | |  _     _   _   _" << std::endl;
	std::cout << "  /_/    \\_\\ |_| |_|   |_| |_| |_|  \\__,_| |_| |___/   |_| |_|  \\___/  |_| |_| ( )   (_) (_) (_)" << std::endl;
	std::cout << "                                                                               |/" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}

/* ********************************************************************************************************* */
/* ********************************************************************************************************* */

void ft_test_form_ShrubberyCreation(void)
{
	{
		std::cout << CYANE UNDER "ShrubberyCreationForm form1;" NONE << std::endl;
		ShrubberyCreationForm form1;
	}

	std::cout << "\n  *********************\n" << std::endl;
	try
	{
		std::cout << CYANE UNDER "ShrubberyCreationForm form1(\"shr_form1\");" NONE << std::endl;
		ShrubberyCreationForm form1("shr_form1");
		//std::cout << form1 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << GREEN " -- exception e" NONE << std::endl;
	}

	std::cout << "\n  *********************\n" << std::endl;
	try
	{
		std::cout << CYANE UNDER "Create : form_test & buro1 150" NONE << std::endl;
		ShrubberyCreationForm form_test("form_test");
		Bureaucrat buro1("buro1", 150);
		form_test.beSigned(buro1);
		buro1.executeForm(form_test);
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << NONE << std::endl;
	}

	std::cout << "\n  *********************\n" << std::endl;
	try
	{
		std::cout << CYANE UNDER "Create : form_test & buro1 140" NONE << std::endl;
		ShrubberyCreationForm form_test("form_test");
		Bureaucrat buro1("buro1", 140);
		form_test.beSigned(buro1);
		buro1.executeForm(form_test);
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << NONE << std::endl;
	}

	std::cout << "\n  *********************\n" << std::endl;
	try
	{
		std::cout << CYANE UNDER "Create : form_test & buro1 137" NONE << std::endl;
		ShrubberyCreationForm form_test("form_test");
		Bureaucrat buro1("buro1", 137);
		form_test.beSigned(buro1);
		buro1.executeForm(form_test);
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << NONE << std::endl;
	}
}

/* ********************************************************************************************************* */
/* ********************************************************************************************************* */

void ft_test_form_RobotomyRequest(void)
{
	{
		std::cout << CYANE UNDER "RobotomyRequestForm form1;" NONE << std::endl;
		RobotomyRequestForm form1;
	}

	std::cout << "\n  *********************\n" << std::endl;
	try
	{
		std::cout << CYANE UNDER "RobotomyRequestForm form1(\"shr_form1\");" NONE << std::endl;
		RobotomyRequestForm form1("shr_form1");
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << GREEN " -- exception e" NONE << std::endl;
	}

	std::cout << "\n  *********************\n" << std::endl;
	try
	{
		std::cout << CYANE UNDER "Create : form_test & buro1 150" NONE << std::endl;
		RobotomyRequestForm form_test("form_test");
		Bureaucrat buro1("buro1", 150);
		form_test.beSigned(buro1);
		buro1.executeForm(form_test);
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << NONE << std::endl;
	}

	std::cout << "\n  *********************\n" << std::endl;
	try
	{
		std::cout << CYANE UNDER "Create : form_test & buro1 70" NONE << std::endl;
		RobotomyRequestForm form_test("form_test");
		Bureaucrat buro1("buro1", 70);
		form_test.beSigned(buro1);
		buro1.executeForm(form_test);
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << NONE << std::endl;
	}

	std::cout << "\n  *********************\n" << std::endl;
	try
	{
		std::cout << CYANE UNDER "Create : form_test & buro1 40" NONE << std::endl;
		RobotomyRequestForm form_test("form_test");
		Bureaucrat buro1("buro1", 40);
		form_test.beSigned(buro1);
		buro1.executeForm(form_test);
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << NONE << std::endl;
	}
}

/* ********************************************************************************************************* */
/* ********************************************************************************************************* */

void ft_test_form_PresidentialPardon(void)
{
	{
		std::cout << CYANE UNDER "PresidentialPardonForm form1;" NONE << std::endl;
		PresidentialPardonForm form1;
	}

	std::cout << "\n  *********************\n" << std::endl;
	try
	{
		std::cout << CYANE UNDER "PresidentialPardonForm form1(\"shr_form1\");" NONE << std::endl;
		PresidentialPardonForm form1("shr_form1");
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << GREEN " -- exception e" NONE << std::endl;
	}

	std::cout << "\n  *********************\n" << std::endl;
	try
	{
		std::cout << CYANE UNDER "Create : form_test & buro1 30" NONE << std::endl;
		PresidentialPardonForm form_test("form_test");
		Bureaucrat buro1("buro1", 30);
		form_test.beSigned(buro1);
		buro1.executeForm(form_test);

	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << NONE << std::endl;
	}

	std::cout << "\n  *********************\n" << std::endl;
	try
	{
		std::cout << CYANE UNDER "Create : form_test & buro1 20" NONE << std::endl;
		PresidentialPardonForm form_test("form_test");
		Bureaucrat buro1("buro1", 20);
		form_test.beSigned(buro1);
		buro1.executeForm(form_test);
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << NONE << std::endl;
	}

	std::cout << "\n  *********************\n" << std::endl;
	try
	{
		std::cout << CYANE UNDER "Create : form_test & buro1 1 & buro2 10" NONE << std::endl;
		PresidentialPardonForm form_test("form_test");
		Bureaucrat buro1("buro1", 1);
		Bureaucrat buro2("buro2", 10);

		form_test.beSigned(buro2);
		form_test.beSigned(buro1);

		buro1.executeForm(form_test);
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << NONE << std::endl;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:12:06 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/27 17:12:06 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"


void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "  ______" << std::endl;
	std::cout << "  | ____|" << std::endl;
	std::cout << "  | |__     _ __      _ __    __ _   _ __     __ _" << std::endl;
	std::cout << "  |  __|   | '_ \\    | '__|  / _` | | '_ \\   / _` |                  " << std::endl;
	std::cout << "  | |____  | | | |   | |    | (_| | | | | | | (_| |  _     _   _   _" << std::endl;
	std::cout << "  |______| |_| |_|   |_|     \\__,_| |_| |_|  \\__, | ( )   (_) (_) (_)" << std::endl;
	std::cout << "                                              __/ | |/" << std::endl;
	std::cout << "                                             |___/" << std::endl;

	std::cout << NONE << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	ft_present();

	{
	std::cout << CYANE UNDER "Form form1;" NONE << std::endl;
	Form form1;
	}

	try
	{
		std::cout << CYANE UNDER "\nTry Form form2(\"form2\", 780, 50);" NONE << std::endl;
		Form form2("form2", 780, 50);
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << GREEN " -- exception& e" NONE << std::endl;
	}

	try
	{
		std::cout << CYANE UNDER "\nTry Form form3(\"form3\", 80, -780);" NONE << std::endl;
		Form form3("form3", 80, -780);
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << GREEN " -- exception& e" NONE << std::endl;
	}

	try
	{
		std::cout << CYANE UNDER "\nTry Form form3(\"form3\", 80, 50);" NONE << std::endl;
		Form form3("form3", 80, 50);
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << GREEN " -- exception& e" NONE << std::endl;
	}

	std::cout << "\n  *********************\n" << std::endl;

	try
	{
		std::cout << CYANE UNDER "\nTry Bureaucrat buro4(\"buro4\", 80);" NONE << std::endl;
		Bureaucrat buro4("buro4", 80);
		std::cout << CYANE UNDER "\nTry Form form3(\"form3\", 80, 50);" NONE << std::endl;
		Form form3("form3", 80, 50);
		std::cout << CYANE UNDER "\nTry Form form4(\"form4\", 70, 50);" NONE << std::endl;
		Form form4("form4", 70, 50);
		std::cout << CYANE UNDER "\nTry Form form3.beSigned(buro4);" NONE << std::endl;
		form3.beSigned(buro4);
		std::cout << CYANE UNDER "\nTry Form form3.beSigned(buro4);" NONE << std::endl;
		form3.beSigned(buro4);
		std::cout << CYANE UNDER "\nTry Form form4.beSigned(buro4);" NONE << std::endl;
		form4.beSigned(buro4);

	}
	catch (std::exception e)
	{
		std::cerr << RED << e.what() << GREEN " -- exception e" NONE << std::endl;
	}

	std::cout << "\n  *********************\n" << std::endl;

		return (0);
}
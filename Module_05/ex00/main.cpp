/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:00:56 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/26 16:00:56 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "    __  __" << std::endl;
	std::cout << "   |  \\/  |" << std::endl;
	std::cout << "   | \\  / |   __ _   _ __ ___     __ _   _ __" << std::endl;
	std::cout << "   | |\\/| |  / _` | | '_ ` _ \\   / _` | | '_ \\ " << std::endl;
	std::cout << "   | |  | | | (_| | | | | | | | | (_| | | | | |  _     _   _   _ " << std::endl;
	std::cout << "   |_|  |_|  \\__,_| |_| |_| |_|  \\__,_| |_| |_| ( )   (_) (_) (_) " << std::endl;
	std::cout << "                                                |/ " << std::endl;

	std::cout << NONE << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	ft_present();

	{
		std::cout << CYANE UNDER "Bureaucrat buro1;" NONE << std::endl;
		Bureaucrat buro1;
	}

	try
	{
		std::cout << CYANE UNDER "\nTry Bureaucrat buro2(\"buro2\", 780);" NONE << std::endl;
		Bureaucrat buro2("buro2", 780);
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << GREEN " -- exception& e" NONE << std::endl;
	}

	try
	{
		std::cout << CYANE UNDER "\nTry Bureaucrat buro3(\"buro3\", -780);" NONE << std::endl;
		Bureaucrat buro3("buro3", -780);
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << GREEN " -- exception& e" NONE << std::endl;
	}

	try
	{
		std::cout << CYANE UNDER "\nTry Bureaucrat buro4(\"buro4\", 80);" NONE << std::endl;
		Bureaucrat buro4("buro4", 80);
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << GREEN " -- exception& e" NONE << std::endl;
	}

	try
	{
		std::cout << CYANE UNDER "\nTry Bureaucrat buro5(\"buro5\", 180);" NONE << std::endl;
		Bureaucrat buro5("buro5", 180);
	}
	catch (std::exception e)
	{
		std::cerr << RED << e.what() << GREEN " -- exception e" NONE << std::endl;
	}

	std::cout << "\n\n" << std::endl;
	std::cout << UNDER "** increment or decrement **\n\n" NONE << std::endl;

	Bureaucrat buro2 ("buro2", 5);

	try
	{
		std::cout << CYANE UNDER "\nTry Bureaucrat buro2(\"buro2\", 5);" NONE << std::endl;
		for (int i = 0; i < 7; i++)
			buro2.setUpGrade();
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << GREEN " -- exception& e" NONE << std::endl;
		std::cout << " :: " << buro2 << std::endl;
	}

	std::cout << "\n  *********************\n" << std::endl;

	Bureaucrat* buro3 = new Bureaucrat("buro3", 145);
	try
	{
		std::cout << CYANE UNDER "\nTry Bureaucrat buro3(\"buro3\", 145);" NONE << std::endl;
		for (int i = 0; i < 7; i++)
			(* buro3).setDownGrade();

	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << GREEN " -- exception& e" NONE << std::endl;		
		std::cout << " :: " << * buro3 << std::endl;
	}
	delete buro3;

	/*
	std::cout << "\n\n" << std::endl;
	std::cout << "\n  *********************\n" << std::endl;

	std::cout << CYANE UNDER "\nBureaucrat buro42(buro2);" NONE << std::endl;
	Bureaucrat buro42(buro2);
	std::cout << "buro42 :: " << buro42 << std::endl;

	//std::cout << "\n\n" << std::endl;
	std::cout << CYANE UNDER "\nBureaucrat buro33(\"buro33\", 33);" NONE << std::endl;
	Bureaucrat buro33("buro33", 33);
	std::cout << CYANE UNDER "\nburo42 = buro33;" NONE << std::endl;

	buro42 = buro33;
	std::cout << " :: " << buro42 << std::endl;*/

	return (0);
}
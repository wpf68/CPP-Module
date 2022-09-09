/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 07:48:51 by pwolff            #+#    #+#             */
/*   Updated: 2022/09/09 07:48:51 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	std::cout << WHITE "================= Span(7)  arg : 10 ================================" NONE << std::endl;

	Span	test0(20000);
	int		longSpan;
	int		shortSpan;

	srand(time(0));

	try
	{
		for (int i = 0; i < 20000; i++)
			test0.addNumber((rand() % 100000) - 50000);
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << NONE << std::endl;
	}

	std::cout << YELLOW "Span test0 = ";
	test0.display();
	std::cout << NONE << std::endl;

	try
	{
		longSpan = test0.longestSpan();
		std::cout << GREEN "longestSpan = " << longSpan << NONE << std::endl;
		shortSpan = test0.shortestSpan();
		std::cout << GREEN "shortesSpan = " << shortSpan << NONE << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << WHITE "====================================================================" NONE << std::endl;
	/* ===================================================================================== */

	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << YELLOW "Span sp = ";
	sp.display();
	std::cout << NONE << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	/* ===================================================================================== */
	std::cout << WHITE "================= Span(7)  arg : 10 ================================" NONE << std::endl;
	Span	test1(7);

	srand(time(0));

	try
	{
		for (int i = 0; i < 10; i++)
			test1.addNumber((rand() % 10000) - 5000);
	}
	catch (std::exception & e)
	{
		std::cerr << RED << e.what() << NONE << std::endl;
	}

	std::cout << YELLOW "Span test1 = ";
	test1.display();
	std::cout << NONE << std::endl;

	try
	{
		longSpan = test1.longestSpan();
		std::cout << GREEN "longestSpan = " << longSpan << NONE << std::endl;
		shortSpan = test1.shortestSpan();
		std::cout << GREEN "shortesSpan = " << shortSpan << NONE << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << YELLOW "\nVerif status Span  = ";
	test1.display();
	std::cout << NONE << std::endl;

	std::cout << WHITE "====================================================================" NONE << std::endl;
	/* ===================================================================================== */
	std::cout << WHITE "================= Test sp = test1 ================================\n" NONE << std::endl;

	sp = test1;
	std::cout << YELLOW "Span sp = ";
	sp.display();
	std::cout << NONE "\n" << std::endl;
	std::cout << WHITE "====================================================================" NONE << std::endl;
	/* ===================================================================================== */
	std::cout << WHITE "================= Span(10)  arg : 9 ================================" NONE << std::endl;

	Span	test3(10);

	srand(time(0));

	try
	{
		for (int i = 0; i < 9; i++)
			test3.addNumber((rand() % 100) - 50);
	}
	catch (std::exception& e)
	{
		std::cerr << RED << e.what() << NONE << std::endl;
	}

	std::cout << YELLOW "Span  = ";
	test3.display();
	std::cout << NONE << std::endl;

	try
	{
		longSpan = test3.longestSpan();
		std::cout << GREEN "longestSpan = " << longSpan << NONE << std::endl;
		shortSpan = test3.shortestSpan();
		std::cout << GREEN "shortesSpan = " << shortSpan << NONE << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << YELLOW "\nVerif status Span  = ";
	test3.display();
	std::cout << NONE << std::endl;

	std::cout << WHITE "====================================================================" NONE << std::endl;
	/* ===================================================================================== */
	std::cout << WHITE "=================  Span(1)  arg : 1 ================================" NONE << std::endl;

	Span	test2(1);
	test2.addNumber(3);

	std::cout << YELLOW "Span  = ";
	test2.display();
	std::cout << NONE << std::endl;

	try
	{
		shortSpan = test2.shortestSpan();
		std::cout << GREEN "shortesSpan = " << shortSpan << NONE << std::endl;
		longSpan = test2.longestSpan();
		std::cout << GREEN "longestSpan = " << longSpan << NONE << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << YELLOW "\nVerif status Span  = ";
	test2.display();
	std::cout << NONE << std::endl;

	std::cout << WHITE "====================================================================" NONE << std::endl;
	std::cout << WHITE "=====================  Random values ===============================" NONE << std::endl;

	/* ===================================================================================== */
	Span tab(100); //Un tableau de 100 cases


	tab.rangeOfIterators(3, 9);
	std::cout << ROSE "\ndisplay  = ";
	tab.display();
	std::cout << std::endl;

	tab.rangeOfIterators(30, 35);
	std::cout << ROSE "\ndisplay  = ";
	tab.display();
	std::cout << std::endl;

	try
	{
		shortSpan = tab.shortestSpan();
		std::cout << GREEN "shortesSpan = " << shortSpan << NONE << std::endl;
		longSpan = tab.longestSpan();
		std::cout << GREEN "longestSpan = " << longSpan << NONE << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << NONE << std::endl;
	std::cout << WHITE "\n===============================//=====================================" NONE << std::endl;
	std::cout << WHITE "==================== defined values  ==================================" NONE << std::endl;

	/* ===================================================================================== */
	Span tab2(20); //Un tableau de 100 cases

	tab2.addNumber(6);
	tab2.addNumber(3);

	tab2.rangeOfIterators(9, 13, 42);
	std::cout << ROSE "\ndisplay  = ";
	tab2.display();
	std::cout << std::endl;

	tab2.rangeOfIterators(4, 6, 2);
	std::cout << ROSE "\ndisplay  = ";
	tab2.display();
	std::cout << std::endl;

	tab2.rangeOfIterators(15, 17, -56);
	std::cout << ROSE "\ndisplay  = ";
	tab2.display();
	std::cout << std::endl;

	tab2.rangeOfIterators(16, 16, -100);
	std::cout << ROSE "\ndisplay  = ";
	tab2.display();
	std::cout << std::endl;

	try
	{
		shortSpan = tab2.shortestSpan();
		std::cout << GREEN "shortesSpan = " << shortSpan << NONE << std::endl;
		longSpan = tab2.longestSpan();
		std::cout << GREEN "longestSpan = " << longSpan << NONE << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << WHITE "===============================//=====================================" << std::endl;

	return (0);
}
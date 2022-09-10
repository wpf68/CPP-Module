/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:59:11 by pwolff            #+#    #+#             */
/*   Updated: 2022/09/10 14:59:11 by pwolff           ###   ########.fr       */
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
			test0.addNumber((rand() % 100000));
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
		shortSpan = test0.shortestSpan();
		std::cout << GREEN "shortesSpan = " << shortSpan << NONE << std::endl;
		longSpan = test0.longestSpan();
		std::cout << GREEN "longestSpan = " << longSpan << NONE << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << WHITE "===============  Subject  ==========================================" NONE << std::endl;
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

	try
	{
		longSpan = sp.longestSpan();
		std::cout << GREEN "\nlongestSpan sp = " << longSpan << NONE << std::endl;
		shortSpan = sp.shortestSpan();
		std::cout << GREEN "shortesSpan sp = " << shortSpan << NONE << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << NONE "\n" << std::endl;
	std::cout << WHITE "       ---------  test sp[1] = 24  ----------  " << std::endl;
	sp.rangeOfIterators(1, 1, 24);
	std::cout << WHITE "Span sp2   = ";
	sp.display();
	std::cout << NONE << std::endl;
	std::cout << WHITE "Span test1 = ";
	test1.display();

	try
	{
		longSpan = sp.longestSpan();
		std::cout << GREEN "\nlongestSpan sp = " << longSpan << NONE << std::endl;
		shortSpan = sp.shortestSpan();
		std::cout << GREEN "shortesSpan sp = " << shortSpan << NONE << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << NONE "\n" << std::endl;
	std::cout << WHITE "====================================================================" NONE << std::endl;
	/* ===================================================================================== */
	std::cout << WHITE "================= Test sp2(test1) ================================\n" NONE << std::endl;

	Span sp2(test1);
	std::cout << YELLOW "Span sp2 = ";
	sp2.display();

	std::cout << NONE "\n" << std::endl;
	std::cout << WHITE "       ---------  test sp2[1] = 42  ----------  "  << std::endl;
	sp2.rangeOfIterators(1, 1, 42);
	std::cout << WHITE "Span sp2   = ";
	sp2.display();
	std::cout << NONE << std::endl;
	std::cout << WHITE "Span test1 = ";
	test1.display();

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

	std::cout << CYANE "\n====================================================================" NONE << std::endl;
	std::cout << CYANE "====================================================================" NONE << std::endl;
	std::cout << CYANE "-- iterator ranges:: if previous range empty, force data to zero ===" NONE << std::endl;
	std::cout << WHITE "\n====================================================================" NONE << std::endl;
	std::cout << WHITE "=====================  Random values :: tab(100) ===================" NONE << std::endl;

	// ===================================================================================== 
	Span tab(100); //Un tableau de 100 cases

	std::cout << YELLOW "\n----------- rangeOfIterators(3, 9)" NONE << std::endl;
	tab.rangeOfIterators(3, 9);
	std::cout << ROSE "display  = ";
	tab.display();
	std::cout << std::endl;

	std::cout << YELLOW "\n----------- rangeOfIterators(30, 35)" NONE << std::endl;
	tab.rangeOfIterators(30, 35);
	std::cout << ROSE "display  = ";
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
	std::cout << WHITE "==================== defined values :: tab(20)  ========================" NONE << std::endl;

	// ===================================================================================== 
	Span tab2(20); //Un tableau de 20 cases

	tab2.addNumber(6);
	tab2.addNumber(3);
	std::cout << ROSE "\ndisplay  = ";
	tab2.display();
	std::cout << std::endl;

	std::cout << YELLOW "\n----------- rangeOfIterators(9, 14, 42)" NONE << std::endl;
	tab2.rangeOfIterators(9, 14, 42);
	std::cout << ROSE "display  = ";
	tab2.display();
	std::cout << std::endl;

	std::cout << YELLOW "\n----------- rangeOfIterators(4, 6, 2)" NONE << std::endl;
	tab2.rangeOfIterators(4, 6, 2);
	std::cout << ROSE "display  = ";
	tab2.display();
	std::cout << std::endl;

	std::cout << YELLOW "\n----------- rangeOfIterators(15, 19, -56)" NONE << std::endl;
	tab2.rangeOfIterators(15, 19, -56);
	std::cout << ROSE "display  = ";
	tab2.display();
	std::cout << std::endl;

	std::cout << YELLOW "\n----------- rangeOfIterators(16, 16, -100)" NONE << std::endl;
	tab2.rangeOfIterators(16, 16, -100);
	std::cout << ROSE "display  = ";
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


	std::cout << WHITE "\n===============================//=====================================" NONE << std::endl;
	std::cout << WHITE "==================== test over values :: tab(10)  ======================" NONE << std::endl;

	Span tab3(10); //Un tableau de 10 cases


	std::cout << YELLOW "\n----------- rangeOfIterators(9, 13)" NONE << std::endl;
	tab3.rangeOfIterators(9, 13);
	std::cout << ROSE "display  = ";
	tab3.display();
	std::cout << std::endl;

	std::cout << YELLOW "\n----------- rangeOfIterators(4, 6, 2)" NONE << std::endl;
	tab3.rangeOfIterators(4, 6, 2);
	std::cout << ROSE "display  = ";
	tab3.display();
	std::cout << std::endl;

	std::cout << YELLOW "\n----------- rangeOfIterators(15, 17, -56)" NONE << std::endl;
	tab3.rangeOfIterators(15, 17, -56);
	std::cout << ROSE "\ndisplay  = ";
	tab3.display();
	std::cout << std::endl;

	std::cout << YELLOW "\n----------- rangeOfIterators(0, 0, -100)" NONE << std::endl;
	tab3.rangeOfIterators(0, 0, -100);
	std::cout << ROSE "\ndisplay  = ";
	tab3.display();
	std::cout << std::endl;

	try
	{
		shortSpan = tab3.shortestSpan();
		std::cout << GREEN "shortesSpan = " << shortSpan << NONE << std::endl;
		longSpan = tab3.longestSpan();
		std::cout << GREEN "longestSpan = " << longSpan << NONE << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << CYANE "\n====================================================================" NONE << std::endl;
	std::cout << CYANE "====================================================================" NONE << std::endl;
	std::cout << CYANE "-- iterator ranges:: source :                             ----------" NONE << std::endl;
	std::cout << CYANE "-- std::vector<int> myvector = { 1, 42, -42, 0, 22 };     ----------" NONE << std::endl;
	std::cout << WHITE "\n====================================================================" NONE << std::endl;
	std::cout << WHITE "====    rangeOfIterators(myvector.begin(), myvector.end());    =======" NONE << std::endl;

	std::vector<int> myvector = { 1, 42, -42, 0, 22 };
	Span copyMyvector(40);

	try
	{
		copyMyvector.rangeOfIterators(myvector.begin(), myvector.end());
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << ROSE "\ndisplay  = ";
	copyMyvector.display();
	std::cout << std::endl;


	std::cout << WHITE "\n====================================================================" NONE << std::endl;
	std::cout << WHITE "=== rangeOfIterators(myvector.begin(), myvector.begin() + 2);  =======" NONE << std::endl;

	try
	{
		copyMyvector.rangeOfIterators(myvector.begin(), myvector.begin() + 2);

	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << ROSE "\ndisplay  = ";
	copyMyvector.display();
	std::cout << std::endl;

	return (0);
}
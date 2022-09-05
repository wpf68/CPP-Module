/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:25:01 by pwolff            #+#    #+#             */
/*   Updated: 2022/09/05 12:25:01 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>	//pour time()  
#include <cstdlib>	//pour rand()

#  define COLOR
#  define CLEAR		"\x1B[2J\x1B[H"
#  define NONE		"\033[0;37m"
#  define WHITE		"\033[1;37m"
#  define RED		"\033[1;31m"
#  define GREEN		"\033[1;32m"
#  define CYANE		"\033[1;36m"
#  define ORANGE	"\033[1,38m"
#  define YELLOW	"\033[1;33m"
#  define BLUE		"\033[1,34m"
#  define GREY		"\033[1,37m"
#  define ROSE		"\033[35m"
#  define UNDER		"\033[4m"
#  define END		"\033[0m"

void	ft_present(void);

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

int main(void)
{
	srand(time(0));

	ft_present();

	for (int i = 0; i < 5; i++)
	{	
		Base* base;

		std::cout << CYANE "\nTest " << i << " :" NONE << std::endl;
		base = generate();
		identify(base);
		identify(*base);
		delete base;
	}

	return (0);
}

void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "" << std::endl;
	std::cout << "  _____       _                  _     _    __   _" << std::endl;
	std::cout << " |_   _|     | |                | |   (_)  / _| (_)" << std::endl;
	std::cout << "   | |     __| |   ___   _ __   | |_   _  | |_   _    ___   ____" << std::endl;
	std::cout << "   | |    / _` |  / _ \\ | '_ \\  | __| | | |  _| | |  / _ \\ |_  /" << std::endl;
	std::cout << "  _| |_  | (_| | |  __/ | | | | | |_  | | | |   | | |  __/  / /" << std::endl;
	std::cout << " |_____|  \\__,_|  \\___| |_| |_|  \\__| |_| |_|   |_|  \\___| /___|" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}

Base* generate(void)
{
	Base*	base;
	int		randum;

	randum = rand() % 3;  // un nombre entre 0 et 2
	switch (randum)
	{
	case	0:
		std::cout << GREEN "Create A" NONE << std::endl;
		base = new A;
		break;
	case	1:
		std::cout << GREEN "Create B" NONE << std::endl;
		base = new B;
		break;
	case	2:
		std::cout << GREEN "Create C" NONE << std::endl;
		base = new C;
		break;
	default:
		std::cout << RED "Error randum = " << randum << NONE << std::endl;
		return (nullptr);
	}

	return (base);
}

void identify(Base* p)
{
	A* a;
	B* b;
	C* c;

	a = dynamic_cast<A*>(p);
	if (a)
		std::cout << YELLOW << p << " * is Class \"A\"" NONE << std::endl;
	b = dynamic_cast<B*>(p);
	if (b)
		std::cout << YELLOW << p << " * is Class \"B\"" NONE << std::endl;
	c = dynamic_cast<C*>(p);
	if (c)
		std::cout << YELLOW << p << " * is Class \"C\"" NONE << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << YELLOW << &p << " & is Class \"A\"" NONE << std::endl;
	}
	catch (std::exception& e)
	{ 
		std::cout << RED << e.what() << "NO Class \"A\"" NONE << std::endl;
	}

	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << YELLOW << &p << " & is Class \"B\"" NONE << std::endl;
	}
	catch(std::bad_cast& e)
	{
		std::cout << RED << e.what() << "NO Class \"B\"" NONE << std::endl;
	}

	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << YELLOW << &p << " & is Class \"C\"" NONE << std::endl;
	}
	catch (std::bad_cast& e)
	{
		std::cout << RED << e.what() << "NO Class \"C\"" NONE << std::endl;
	}
}
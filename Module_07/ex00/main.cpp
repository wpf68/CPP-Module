/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 13:07:57 by pwolff            #+#    #+#             */
/*   Updated: 2022/09/06 13:07:57 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

void	ft_present(void);

int main(void)
{
	ft_present();

	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

	std::cout << "\n************************\n" << std::endl;


	a = 10;
	b = 5;

	::swap(a, b);
	std::cout << GREEN "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << NONE "\n" << std::endl;

	a = 42;
	b = 48;

	::swap(a, b);
	std::cout << YELLOW "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min<int>(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max<int>(a, b) << NONE "\n" << std::endl;

	float e = 2.666;
	float f = 3.45;
	::swap(e, f);
	std::cout << CYANE"e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min(e, f) << std::endl;
	std::cout << "max( e, f ) = " << ::max(e, f) << NONE "\n" << std::endl;

	return (0);
}


void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "" << std::endl;
	std::cout << "     ____                   _                                   __                          _     _" << std::endl;
	std::cout << "    / __ \\                 | |                                 / _|                        | |   (_)" << std::endl;
	std::cout << "   | |  | |  _   _    ___  | |   __ _   _   _    ___   ___    | |_    ___    _ __     ___  | |_   _    ___    _ __    ___" << std::endl;
	std::cout << "   | |  | | | | | |  / _ \\ | |  / _` | | | | |  / _ \\ / __|   |  _|  / _ \\  | '_ \\   / __| | __| | |  / _ \\  | '_ \\  / __|" << std::endl;
	std::cout << "   | |__| | | |_| | |  __/ | | | (_| | | |_| | |  __/ \\__ \\   | |   | (_) | | | | | | (__  | |_  | | | (_) | | | | | \\__ \\" << std::endl;
	std::cout << "    \\___\\_\\  \\__,_|  \\___| |_|  \\__, |  \\__,_|  \\___| |___/   |_|    \\___/  |_| |_|  \\___| \\__|  |_|  \\___/  |_| |_| |___/" << std::endl;
	std::cout << "                                   | |" << std::endl;
	std::cout << "                                   |_|" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}
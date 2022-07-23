/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:00:08 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/23 19:00:08 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "   __  __           _           _                                    _" << std::endl;
	std::cout << "  |  \\/  |         (_)         | |                                  | |" << std::endl;
	std::cout << "  | \\  / |   __ _   _   _ __   | |_    ___   _ __     __ _   _ __   | |_" << std::endl;
	std::cout << "  | |\\/| |  / _` | | | | '_ \\  | __|  / _ \\ | '_ \\   / _` | | '_ \\  | __|                   " << std::endl;
	std::cout << "  | |  | | | (_| | | | | | | | | |_  |  __/ | | | | | (_| | | | | | | |_   _" << std::endl;
	std::cout << "  |_|  |_|  \\__,_| |_| |_| |_|  \\__|  \\___| |_| |_|  \\__,_| |_| |_|  \\__| ( )" << std::endl;
	std::cout << "                                                                          |/" << std::endl;
	std::cout << "	" << std::endl;
	std::cout << "    ____                                     _                              _" << std::endl;
	std::cout << "   / __ \\                                   | |                            | |" << std::endl;
	std::cout << "  | |  | |  _ __      _ __     ___   _   _  | |_     _ __     __ _   _ __  | |   ___   _ __" << std::endl;
	std::cout << "  | |  | | | '_ \\    | '_ \\   / _ \\ | | | | | __|   | '_ \\   / _` | | '__| | |  / _ \\ | '__|" << std::endl;
	std::cout << "  | |__| | | | | |   | |_) | |  __/ | |_| | | |_    | |_) | | (_| | | |    | | |  __/ | |" << std::endl;
	std::cout << "   \\____/  |_| |_|   |.__ /   \\___|  \\__,_|  \\__|   |.__ /   \\__,_| |_|    |_|  \\___| |_|" << std::endl;
	std::cout << "                     | |                            | |" << std::endl;
	std::cout << "                     |_|                            |_|" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}

int main(void) {
	ft_present();

	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	return 0;
}
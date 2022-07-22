/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:26:42 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/22 16:26:42 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "   __  __                                                       _" << std::endl;
	std::cout << "  |  \\/  |                                                     (_)" << std::endl;
	std::cout << "  | \\  / |   ___    _ __      _ __    _ __    ___   _ __ ___    _    ___   _ __      ___    __ _   _ __     ___    _ __" << std::endl;
	std::cout << "  | |\\/| |  / _ \\  | '_ \\    | '_ \\  | '__|  / _ \\ | '_ ` _ \\  | |  / _ \\ | '__|    / __|  / _` | | '_ \\   / _ \\  | '_ \\ " << std::endl;
	std::cout << "  | |  | | | (_) | | | | |   | |_) | | |    |  __/ | | | | | | | | |  __/ | |      | (__  | (_| | | | | | | (_) | | | | |" << std::endl;
	std::cout << "  |_|  |_|  \\___/  |_| |_|   | .__/  |_|     \\___| |_| |_| |_| |_|  \\___| |_|       \\___|  \\__,_| |_| |_|  \\___/  |_| |_|" << std::endl;
	std::cout << "                             | |" << std::endl;
	std::cout << "                             |_|" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}

int main(void) {
	ft_present();

	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:18:53 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/23 15:18:53 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "    _____   _                                        _     _   _" << std::endl;
	std::cout << "   / ____| | |                                      | |   (_) | |" << std::endl;
	std::cout << "  | |      | |   __ _   ___   ___    ___     _   _  | |_   _  | |   ___" << std::endl;
	std::cout << "  | |      | |  / _` | / __| / __|  / _ \\   | | | | | __| | | | |  / _ \\" << std::endl;
	std::cout << "  | |____  | | | (_| | \\__ \\ \\__ \\ |  __/   | |_| | | |_  | | | | |  __/" << std::endl;
	std::cout << "   \\_____| |_|  \\__,_| |___/ |___/  \\___|    \\__,_|  \\__| |_| |_|  \\___|" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}

int main(void) {
	ft_present();

	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:41:33 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/20 10:41:33 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "   _    _                                   _                      _                 _" << std::endl;
	std::cout << "  | \\  / |                                 | |                    (_)               | |" << std::endl;
	std::cout << "  | \\  / |   ___     __ _   _ __           | |__    _ __    __ _   _   _ __    ____ | |" << std::endl;
	std::cout << "  | |\\/| |  / _ \\   / _` | | '__|          | '_ \\  | '__|  / _` | | | | '_ \\  |_  / | |" << std::endl;
	std::cout << "  | |  | | | (_) | | (_| | | |             | |_) | | |    | (_| | | | | | | |  / /  |_|" << std::endl;
	std::cout << "  |_|  |_|  \\___/   \\__,_| |_|             |_.__/  |_|     \\__,_| |_| |_| |_| /___| (_)" << std::endl;
	std::cout << "	                           ______" << std::endl;
	std::cout << "	                         | ______ |" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	int			nb = 10;
	Zombie*		horde;
	std::string	name;


	ft_present();
	std::cout << WHITE << "\nName of the new Horde of 10 Zombies : " << RED;
	std::getline(std::cin, name);
	std::cout << WHITE;
	std::cout << std::endl;

	horde = zombieHorde(nb, name);

	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << WHITE "Zombie n� " GREEN << i + 1 << " : ";
		horde[i].announce();
	}
	std::cout << std::endl;

	delete[]	horde;
	std::cout << std::endl;

	return (0);
}
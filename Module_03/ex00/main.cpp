/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:59:07 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/20 13:59:07 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "             _____   _______   _____    ____    _   _     _" << std::endl;
	std::cout << "    /\\      / ____| |__   __| |_   _|  / __ \\  | \\ | |   | |" << std::endl;
	std::cout << "   /  \\    | |         | |      | |   | |  | | |  \\| |   | |" << std::endl;
	std::cout << "  / /\\ \\   | |         | |      | |   | |  | | | . ` |   | |" << std::endl;
	std::cout << " / ____ \\  | |____     | |     _| |_  | |__| | | |\\  |   |_|" << std::endl;
	std::cout << "/_/    \\_\\  \\_____|    |_|    |_____|  \\____/  |_| \\_|   (_)" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	std::string	name;

	std::cout << std::endl;

	ft_present();

	ClapTrap	Hero;

	std::cout << YELLOW "\nWhat is your name venerable warrior ?" NONE << std::endl;
	while (true)
	{
		std::cout << GREEN "My name is : " CYANE;
		std::getline(std::cin, name);
		std::cout << NONE << std::endl;
		if (!name.empty())
			break;
	}
	std::cout << YELLOW "\n--------------- ClapTrap	Player1(name); ------------------" NONE << std::endl;
	ClapTrap	Player1(name);

	std::cout << YELLOW "\n--------------- Player1.attack(\"Hero\"); ------------------" NONE << std::endl;
	Player1.attack("Hero");
	std::cout << YELLOW "\n--------------- Hero.takeDamage(Player1.getDamage()); ------------------" NONE << std::endl;
	Hero.takeDamage(Player1.getDamage());
	std::cout << YELLOW "\n--------------- Player1.beRepaired(10); ------------------" NONE << std::endl;
	Player1.beRepaired(10);
	std::cout << YELLOW "\n--------------- Hero.attack(\"Player1\"); ------------------" NONE << std::endl;
	Hero.attack("Player1");
	std::cout << YELLOW "\n--------------- Player1.takeDamage(Hero.getDamage()); ------------------" NONE << std::endl;
	Player1.takeDamage(Hero.getDamage());
	std::cout << YELLOW "\n--------------- ClapTrap	Player2(Player1); ------------------" NONE << std::endl;
	ClapTrap	Player2(Player1);
	std::cout << YELLOW "\n--------------- Player2.attack(\"HERO\"); ------------------" NONE << std::endl;
	Player2.attack("HERO");

	std::cout << YELLOW "\n--------------- Player1.getStatusPlayer2(); ------------------" NONE << std::endl;
	Player1.getStatusPlayer2();


	std::cout << YELLOW "\n--------------- Hero.takeDamage(Player1.getDamage()); ------------------" NONE << std::endl;
	Hero.takeDamage(Player1.getDamage());

	std::cout << WHITE "\nName Player 2 : " << Player2 << NONE << std::endl;
	std::cout << YELLOW "\n--------------- Player2 = Hero; ------------------" NONE << std::endl;
	Player2 = Hero;
	std::cout << WHITE "Name Player 2 : " << Player2 << NONE << std::endl;
	std::cout << WHITE "Name Player 2 : " << Player2.getName() << NONE << std::endl;

	std::cout << YELLOW "\n--------------- Hero.attack(\"Player1\"); ------------------" NONE << std::endl;
	Hero.attack("Player1");
	std::cout << YELLOW "\n--------------- Player1.takeDamage(Hero.getDamage()); ------------------" NONE << std::endl;
	Player1.takeDamage(Hero.getDamage());
	std::cout << YELLOW "\n--------------- Player1.attack(\"Hero\"); ------------------" NONE << std::endl;
	Player1.attack("Hero");
	std::cout << YELLOW "\n--------------- Player1.beRepaired(10); ------------------" NONE << std::endl;
	Player1.beRepaired(10);
	
	std::cout << GREEN "\n** BYE **\n" NONE << std::endl;

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:09:23 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/20 14:09:23 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "    _____" << std::endl;
	std::cout << "   / ____|" << std::endl;
	std::cout << "  | (___     ___   _ __    ___   _ __     __ _" << std::endl;
	std::cout << "   \\___ \\   / _ \\ | '__|  / _ \\ | '_ \\   / _` |" << std::endl;
	std::cout << "   ____) | |  __/ | |    |  __/ | | | | | (_| |  _" << std::endl;
	std::cout << "  |_____/   \\___| |_|     \\___| |_| |_|  \\__,_| ( )" << std::endl;
	std::cout << "                                                |/" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	std::string	name;

	std::cout << std::endl;
	ft_present();

	std::cout << YELLOW "\n--------------- ScavTrap Player5; ------------------" NONE << std::endl;
	ScavTrap	Player5;

	std::cout << YELLOW "\n--------------- ScavTrap Player3(player3); ------------------" NONE << std::endl;
	ScavTrap	Player3("player3");

	std::cout << YELLOW "\n--------------- ScavTrap Player3 Name & status ------------------" NONE << std::endl;
	std::cout << "Name Player3 = " << Player3;
	Player3.getStatusPlayer2();

	std::cout << YELLOW "\n--------------- ScavTrap Player4(Player3); ------------------" NONE << std::endl;
	ScavTrap	Player4(Player3);

	std::cout << YELLOW "\n--------------- Player4.guardGate(); ------------------" NONE << std::endl;
	Player4.guardGate();

	std::cout << YELLOW "\n--------------- ScavTrap Player6(player6); ------------------" NONE << std::endl;
	ScavTrap	Player6("player6");

	std::cout << YELLOW "\n--------------- Player3.attack(\"Player6\"); ------------------" NONE << std::endl;
	Player3.attack("Player6");
	Player3.getStatusPlayer2();
	Player6.takeDamage(Player3.getDamage());
	Player6.getStatusPlayer2();

	std::cout << YELLOW "\n--------------- Player5 = Hero; ------------------" NONE << std::endl;
	Player3 = Player5;
	Player5.getStatusPlayer2();
	Player3.getStatusPlayer2();

	std::cout << GREEN "\n** BYE **\n" NONE << std::endl;

	return (0);
}
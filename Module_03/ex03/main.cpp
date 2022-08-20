/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:16:50 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/18 19:16:50 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "    ____    _" << std::endl;
	std::cout << "   / __ \\  | |" << std::endl;
	std::cout << "  | |  | | | | __" << std::endl;
	std::cout << "  | |  | | | |/ /" << std::endl;
	std::cout << "  | |__| | |   <   _     _   _   _" << std::endl;
	std::cout << "   \\____/  |_|\\_\\ ( )   (_) (_) (_)" << std::endl;
	std::cout << "                  |/" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	std::string	name;

	std::cout << std::endl;

	ft_present();

	std::cout << YELLOW "\n--------------- DiamondTrap Player5; ------------------" NONE << std::endl;
	DiamondTrap	Player5;
	Player5.getStatusPlayer2();

	std::cout << YELLOW "\n--------------- DiamondTrap Player3(player3); ------------------" NONE << std::endl;
	DiamondTrap	Player3("player3");

	std::cout << YELLOW "\n--------------- DiamondTrap Player3 Name & status ------------------" NONE << std::endl;
	Player3.getStatusPlayer2();

	std::cout << YELLOW "\n--------------- DiamondTrap Player4(Player3); ------------------" NONE << std::endl;
	DiamondTrap	Player4(Player3);
	Player4.getStatusPlayer2();

	std::cout << YELLOW "\n--------------- Player4.whoAmI(); ------------------" NONE << std::endl;
	Player4.whoAmI();
	std::cout << YELLOW "\n--------------- Player4.highFiveGuys(); ------------------" NONE << std::endl;
	Player4.hightFivesGuys();

	std::cout << YELLOW "\n--------------- DiamondTrap Player6(player6); ------------------" NONE << std::endl;
	DiamondTrap	Player6("player6");

	std::cout << YELLOW "\n--------------- Player3.attack(\"Player6\"); ------------------" NONE << std::endl;
	Player3.attack("Player6");
	Player3.getStatusPlayer2();
	Player6.takeDamage(Player3.getDamage());
	Player6.getStatusPlayer2();

	std::cout << GREEN "\n** BYE **\n" NONE << std::endl;

	return (0);
}
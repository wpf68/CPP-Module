/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:49:39 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/18 15:49:39 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "  _______                                  _   _" << std::endl;
	std::cout << " |__   __|                                (_) | |" << std::endl;
	std::cout << "    | |     _ __    __ _  __   __   __ _   _  | |" << std::endl;
	std::cout << "    | |    | '__|  / _` | \\ \\ / /  / _` | | | | |              " << std::endl;
	std::cout << "    | |    | |    | (_| |  \\ V /  | (_| | | | | |  _  _  _" << std::endl;
	std::cout << "    |_|    |_|     \\__,_|   \\_/    \\__,_| |_| |_| (_)(_)(_)" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	std::string	name;

	std::cout << std::endl;
	ft_present();

	std::cout << YELLOW "\n--------------- FragTrap Player5; ------------------" NONE << std::endl;
	FragTrap	Player5;

	std::cout << YELLOW "\n--------------- FragTrap Player3(player3); ------------------" NONE << std::endl;
	FragTrap	Player3("player3");

	std::cout << YELLOW "\n--------------- FragTrap Player3 Name & status ------------------" NONE << std::endl;
	std::cout << "Name Player3 = " << Player3;
	Player3.getStatusPlayer2();

	std::cout << YELLOW "\n--------------- FragTrap Player4(Player3); ------------------" NONE << std::endl;
	FragTrap	Player4(Player3);

	std::cout << YELLOW "\n--------------- Player4.highFiveGuys(); ------------------" NONE << std::endl;
	Player4.hightFivesGuys();

	std::cout << YELLOW "\n--------------- FragTrap Player6(player6); ------------------" NONE << std::endl;
	FragTrap	Player6("player6");

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
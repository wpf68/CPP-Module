/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:46:11 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/22 10:46:11 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "   _    _                  _      __   _   _   _" << std::endl;
	std::cout << "  | |  | |                | |    / _| (_) | | | |" << std::endl;
	std::cout << "  | |__| |   __ _   _ __  | |   | |_   _  | | | |_    ___   _ __" << std::endl;
	std::cout << "  |  __  |  / _` | | '__| | |   |  _| | | | | | __|  / _ \\ | '__|" << std::endl;
	std::cout << "  | |  | | | (_| | | |    | |   | |   | | | | | |_  |  __/ | |" << std::endl;
	std::cout << "  |_|  |_|  \\__,_| |_|    |_|   |_|   |_| |_|  \\__|  \\___| |_|" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}

int	main(int argc, char **argv)
{
	ft_present();

	Harl		Harl1;

	if (argc == 1)
	{
		std::cout << GREEN "\n[ Probably complaining about insignificant problems ]\n\n" << std::endl;
		std::cout << WHITE "\nCommands available :\n" << std::endl;
		std::cout << GREEN " \"DEBUG\"   - " WHITE " DEBUG" << std::endl;
		std::cout << GREEN " \"INFO\"    - " YELLOW " INFO" << std::endl;
		std::cout << GREEN " \"WARNING\" - " CYANE " WARNING" << std::endl;
		std::cout << GREEN " \"ERROR\"   - " RED " ERROR" NONE << std::endl;
		return (0);
	}
		Harl1.complain(argv[1]);

	return (0);
}
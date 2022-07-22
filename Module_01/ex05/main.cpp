/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 09:31:15 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/22 09:31:15 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "   _    _                  _     ___         ___" << std::endl;
	std::cout << "  | |  | |                | |   |__ \\       / _ \\" << std::endl;
	std::cout << "  | |__| |   __ _   _ __  | |      ) |     | | | |" << std::endl;
	std::cout << "  |  __  |  / _` | | '__| | |     / /      | | | |" << std::endl;
	std::cout << "  | |  | | | (_| | | |    | |    / /_   _  | |_| |" << std::endl;
	std::cout << "  |_|  |_|  \\__,_| |_|    |_|   |____| (_)  \\___/" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	std::string	level = "";

	ft_present();
	Harl		Harl1;

	std::cout << WHITE "\nCommands :\n" << std::endl;
	std::cout << GREEN " [1] or [DEBUG]   -" WHITE " DEBUG" << std::endl;
	std::cout << GREEN " [2] or [INFO]    -" YELLOW " INFO" << std::endl;
	std::cout << GREEN " [3] or [WARNING] -" CYANE " WARNING" << std::endl;
	std::cout << GREEN " [4] or [ERROR]   -" RED " ERROR" << std::endl;
	std::cout << GREEN " [5] or [QUIT]    - QUIT" NONE << std::endl;

	while (true)
	{
		std::cout << GREY "\n ** Your Choice : " WHITE;
		std::getline(std::cin, level);
		if (level == "5" || level == "QUIT")
			break;

		Harl1.complain(level);
	}

	return (0);
}
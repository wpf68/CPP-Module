/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 09:30:18 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/22 09:30:18 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

							/*Public*/
Harl::Harl()
{
	std::cout << YELLOW "***** Welcome Harl *****" NONE << std::endl;
}

Harl::~Harl()
{
	std::cout << GREEN "\n***** BYE Harl .... *****\n" NONE << std::endl;
}

	/*Geters*/
void	Harl::complain(std::string level)
{
	int			i;
	void		(Harl::*pt[4])(void);
	std::string	cmd[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	bool		cmd_ok = 0;

	pt[0] = &Harl::debug;
	pt[1] = &Harl::info;
	pt[2] = &Harl::warning;
	pt[3] = &Harl::error;

		while (true)
		{
			i = atoi(level.c_str());
			if ((i >= 1 && i <= 4))
			{
				(this->*pt[i - 1])();
				break;
			}
			else
			{
				for (i = 0; i < 4; i++)
				{
					if (level == cmd[i])
					{
						(this->*pt[i])();
						cmd_ok = 1;
					}
				}
				if (cmd_ok)
					break;

			}	
			std::cout << RED "\nEnter a number between 1 to 4 or comments please(no retirement possible) : " WHITE;
			std::getline(std::cin, level);
		}
}

							/*Pivate*/
void	Harl::debug(void)
{
	std::cout << WHITE "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special" \
		"ketchup burger.I really do!" NONE << std::endl;
}

void	Harl::info(void)
{
	std::cout << YELLOW "I cannot believe adding extra bacon costs more money. You didn�t put enough "\
		"bacon in my burger!If you did, I wouldn�t be asking for more!" NONE << std::endl;
}

void	Harl::warning(void)
{
	std::cout << CYANE "I think I deserve to have some extra bacon for free. I�ve been coming for "\
		"years whereas you started working here since last month." NONE << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED "This is unacceptable! I want to speak to the manager now." NONE << std::endl;
}
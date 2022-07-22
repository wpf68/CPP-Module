/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:45:09 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/22 10:45:09 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


							/*Public*/
Harl::Harl()
{
	std::cout << YELLOW "***** Welcome Harl *****\n" NONE << std::endl;
}

Harl::~Harl()
{
	std::cout << GREEN "\n\n***** BYE Harl .... *****\n" NONE << std::endl;
}

	/*Geters*/
void	Harl::complain(std::string level)
{
	int			i;
	void		(Harl:: * pt[4])(void);
	std::string	cmd[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	bool		cmd_ok = 0;

	pt[0] = &Harl::debug;
	pt[1] = &Harl::info;
	pt[2] = &Harl::warning;
	pt[3] = &Harl::error;

	for (i = 0; i < 4; i++)
	{
		if (level == cmd[i] || cmd_ok)
		{

			(this->*pt[i])();
			cmd_ok = true;
		}
	}

	if (cmd_ok == false)
	{
		std::cout << GREEN "\n[ Probably complaining about insignificant problems ]\n\n" << std::endl;
		std::cout << WHITE "\nCommands available :\n" << std::endl;
		std::cout << GREEN " \"DEBUG\"   - " WHITE " DEBUG" << std::endl;
		std::cout << GREEN " \"INFO\"    - " YELLOW " INFO" << std::endl;
		std::cout << GREEN " \"WARNING\" - " CYANE " WARNING" << std::endl;
		std::cout << GREEN " \"ERROR\"   - " RED " ERROR" NONE << std::endl;
	}
}


							/*Pivate*/
void	Harl::debug(void)
{
	std::cout << WHITE "\n[ DEBUG ]" NONE << std::endl;
	std::cout << WHITE "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special" \
		"ketchup burger.I really do!" NONE << std::endl;
}

void	Harl::info(void)
{
	std::cout << YELLOW "\n[ INFO ]" NONE << std::endl;
	std::cout << YELLOW "I cannot believe adding extra bacon costs more money. You didn't put enough "\
		"bacon in my burger! \nIf you did, I wouldn't be asking for more!" NONE << std::endl;
}

void	Harl::warning(void)
{
	std::cout << CYANE "\n[ WARNING ]" NONE << std::endl;
	std::cout << CYANE "I think I deserve to have some extra bacon for free. \nI've been coming for "\
		"years whereas you started working here since last month." NONE << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED "\n[ ERROR ]" NONE << std::endl;
	std::cout << RED "This is unacceptable! I want to speak to the manager now." NONE << std::endl;
}
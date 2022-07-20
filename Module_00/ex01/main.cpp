/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:18:58 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/20 10:19:05 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_Class.hpp"

int	main(void)
{
	std::string	cmd;
	int		on_off;
	
	on_off = 1;
	PhoneBook Repertory;
 
	while (on_off)
	{
		std::cout << F_BOLD << "\nCommands :\n" << std::endl;
		std::cout << GREEN << " [1] - ADD" << std::endl;
		std::cout << " [2] - SEARCH" << std::endl;
		std::cout << " [3] - EXIT\n" << std::endl;
		std::cout << F_NONE << F_BOLD << " Your Choice : ";
		std::getline(std::cin, cmd);

		if (cmd == "3")
			on_off = 0;
		else if (cmd == "1")
			Repertory.ft_add();
		else if (cmd == "2")
			Repertory.ft_search();
		else
			std::cout << RED << "\n" << cmd << RED << \
				" : Choice not available" \
				<< std::endl << std::endl;
		std::cout << F_NONE;
	}
	std::cout << "\x1B[2J\x1B[H";
	std::cout << "\n" << CYANE << "\n\t -- GOOD-BYE --\n" \
				<< std::endl << std::endl;

	return (0);
}



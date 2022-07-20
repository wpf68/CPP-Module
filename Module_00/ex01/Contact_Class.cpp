/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:15:23 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/20 10:15:37 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact_Class.hpp"

std::string	Contact::_input[5]={
	"First name    ",
	"Last name     ",
	"Nickname      ",
	"Phone number  ",
	"Darkest secret"
};


/*
**  Private method
*/




/*
**  Public method
*/



        /*Constructor*/

	Contact::Contact(void)
{
/*	int	i = -1;
	int	k;
	static int	j = 0;

	std::cout << "-- Test --" << j << std::endl;
	while (++i < 5)
	{
		this->_repertory[i] = "--";
		k = 0;
		while (k++ < j)
			this->_repertory[i] += "--";
	}
	i = -1;
	while (++i < 5)
		std::cout << this->_repertory[i] << std::endl;
	j++;*/
}

        /*Destructor*/





void	Contact::ft_create_repertory(Contact& Coord)
{
	int		i;
	std::string	data;

	i = -1;
	std::cout << F_BOLD << std::endl;
	while (++i < 5)
	{
		std::cout << this->_input[i] << " :: ";
		std::getline(std::cin, data);
		Coord._repertory[i] = data;
	}
	std::cout << F_NONE;
}

void	Contact::ft_print_repertory(Contact Coord, int j)
{
	int		i;

	std::cout << "|         " << F_YELLOW << j << F_NONE;
	i = -1;
	while (++i < 3)
	{
		std::cout << "|";
		if (Coord._repertory[i].size() < 10)
			std::cout << CYANE << std::setw(10) << Coord._repertory[i];
		else
			std::cout << CYANE << Coord._repertory[i].substr(0,9) << ".";
		std::cout << F_NONE;
	}
	std::cout << "|" << std::endl;
	i = -1;
	while (++i < 4)
		std::cout << "-----------";
	std::cout << "-" << std::endl;
}

void	Contact::ft_print_contact(Contact Coord, int j)
{
	int		i;

	std::cout << CLEAR;
	std::cout << "\n\tContact n° " << F_YELLOW << j << F_NONE << std::endl;
	std::cout << std::endl;

	i = -1;
	while (++i < 5)
	{
		std::cout << F_BOLD << this->_input[i] << " :: " << F_NONE;
		std::cout << CYANE << Coord._repertory[i] << F_NONE << std::endl;
	}
	std::cout << std::endl;
}

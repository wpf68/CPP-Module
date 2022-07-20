/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:22:33 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/20 10:22:38 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_Class.hpp"


/*
**  Private method
*/


/*
**  Public method
*/

        /*Constructor*/

	PhoneBook::PhoneBook(void)
{
	this->_nbContact = -1;
	this->ft_present();
}

        /*Destructor*/






void    PhoneBook::ft_present(void) const 
{
	std::cout << "\x1B[2J\x1B[H";
	std::cout << F_YELLOW ;
	std::cout << "+-------------------------------------------------------+\n";
	std::cout << "|                     PHONE BOOK                        |\n";
	std::cout << "+-------------------------------------------------------+\n";
	std::cout << "|  Welcome in the 80s and its unbelievable technology!  |\n";
	std::cout << "|  I present to your attention the \"PhoneBook\"          |\n";
	std::cout << "|         It can store a maximum of 8 contacts          |\n";
	std::cout << "|        If the user tries to add a 9th contact         |\n";
	std::cout << "|        replace the oldest one by the new one.         |\n";
	std::cout << "+-------------------------------------------------------+\n";
	std::cout << "\n" << GREEN;
	std::cout << "+-------------------------------------------------------+\n";
	std::cout << "|                  AVAILABLE COMMANDS                   |\n";
	std::cout << "+-------------------------------------------------------+\n";
	std::cout << "|                                                       |\n";
	std::cout << "|     ADD     -   use this command to add contact       |\n";
	std::cout << "|                 to phone book                         |\n";
	std::cout << "|                                                       |\n";
	std::cout << "|     SEARCH  -   shows a list of contacts,             |\n";
	std::cout << "|                 then you need to enter the serial     |\n";
	std::cout << "|                 number of the contact to view         |\n";
	std::cout << "|                 the detailed information.             |\n";
	std::cout << "|                 0 to exit from search                 |\n";
	std::cout << "|                                                       |\n";
	std::cout << "|     EXIT    -   exit from PhoneBook                   |\n";
	std::cout << "|                 ATTENTION! All contacts will be lost! |\n";
	std::cout << "|                                                       |\n";
	std::cout << "+-------------------------------------------------------+\n";
	std::cout << F_NONE ;
}

void	PhoneBook::ft_add(void)
{
	if (this->_nbContact < 7)
		this->_nbContact += 1;
	
	this->ft_present();
	std::cout << F_BOLD << CYANE << "\n\t\tContact n° " << this->_nbContact + 1 << F_NONE << std::endl;
	Coord[this->_nbContact].ft_create_repertory(Coord[this->_nbContact]);
}

void	PhoneBook::ft_search(void)
{
	int		i;
	std::string	cmd;

	if (this->_nbContact == -1)
	{
		std::cout << RED << "\n\t\tRepertory is empty !!!" << F_NONE << std::endl;
		return ;
	}

	i = -1;
	while (++i < 4)
		std::cout << "-----------";
	std::cout << "-" << std::endl;
	std::cout << "|     INDEX";
	std::cout << "|FIRST NAME";
	std::cout << "| LAST NAME";
	std::cout << "|  NICKNAME|" << std::endl;

	i = -1;
	while (++i < 4)
		std::cout << "-----------";
	std::cout << "-" << std::endl;

	i = -1;
	while (++i <= this->_nbContact)
		Coord[i].ft_print_repertory(Coord[i], i + 1);
	std::cout << GREEN << "\nEnter Num to contact (9 : quit) : ";

	while (true)
	{
		std::cout << F_NONE << F_BOLD;
		std::getline(std::cin, cmd);
		i = atoi(cmd.c_str());
		if ((i >= 1 && i <= this->_nbContact + 1) || i == 9)
			break ;
		std::cout << RED << "\nEnter Num to contact (9 : quit) please : ";
	}
	if (i == 9)
		return ;
		
	Coord[i - 1].ft_print_contact(Coord[i - 1], i);


	
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:59:48 by pwolff            #+#    #+#             */
/*   Updated: 2022/09/06 15:59:48 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	ft_present(void);

int main(void)
{
	ft_present();

	std::cout << YELLOW "\n*************  Type int  ***********************\n" << std::endl;
	int	size = 4;
	int tab[9] = { 2, 4, 6, 8, 10 };
	iter<int>(tab, size, f);

	std::cout << CYANE "\n*************  Type char  ***********************\n" << std::endl;
	char tab2[] = "HELLO WORLD";
	iter<char>(tab2,strlen(tab2), f);

	std::cout << GREEN "\n*************  Type float  ***********************\n" << std::endl;
	float tab3[10] = {42.42, 3.14, 2, 3.01};
	iter<float>(tab3, static_cast<int>(sizeof(tab3) / sizeof(tab3[0])), f);

	std::cout << "\n" NONE << std::endl;

	return (0);
}

void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "" << std::endl;
	std::cout << "  _____   _" << std::endl;
	std::cout << " |_   _| | |" << std::endl;
	std::cout << "   | |   | |_    ___   _ __" << std::endl;
	std::cout << "   | |   | __|  / _ \\ | '__|" << std::endl;
	std::cout << "  _| |_  | |_  |  __/ | |" << std::endl;
	std::cout << " |_____|  \\__|  \\___| |_|" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}
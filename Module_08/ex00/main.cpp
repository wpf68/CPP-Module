/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:57:02 by pwolff            #+#    #+#             */
/*   Updated: 2022/09/07 18:57:02 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void	ft_present(void);

int	main(void)
{
	ft_present();

	std::cout << ROSE "--------------------------------- Test ** vector ** ----------------------------------------\n" NONE << std::endl;

//	std::vector<int> condener(5,56);
//	std::vector<int> condener(7);
	std::vector<int> condener = {0, 2, 45, 5, 56, 8};

	condener.push_back(2);

	for (int i = 0; i < condener.size(); i++)
		std::cout << YELLOW "Index :: condener [" << i << "] = " << condener[i] << NONE << std::endl;

	std::vector<int>::iterator it;
	for (it = condener.begin(); it != condener.end(); it++)
		std::cout << CYANE "Iterator :: condener [" << &it << "] = " << *it << NONE << std::endl;

	std::cout << ROSE "Test : easyfind(condener, 5)" NONE << std::endl;
	try
	{
		std::cout << GREEN "Element found in condener : " << *(easyfind(condener, 5)) << NONE << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << RED "NO MATCH !!!" NONE << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << ROSE "Test : easyfind(condener, 9)" NONE << std::endl;
	try
	{
		std::cout << GREEN "Element found in condener : " << *(easyfind(condener, 9)) << NONE << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << RED "NO MATCH !!!" NONE << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << ROSE "\n--------------------------------- Test ** list ** ----------------------------------------\n" NONE << std::endl;

	std::list<int> condener2 = {23, 23, 58, 45, 5};

	condener2.push_back(42);

	/*   ------------- vector OK -- No permisse for list  ---------------------------------
	for (int i = 0; i < condener2.size(); i++)
		std::cout << "condener2 [" << i << "] = " << condener2[i] << std::endl;
	*/
	std::list<int>::iterator it2;
	for (it2 = condener2.begin(); it2 != condener2.end(); it2++)
		std::cout << CYANE "Iterator :: condener2 [" << &it2 << "] = " << *it2 << NONE << std::endl;

	std::cout << ROSE "Test : easyfind(condener, 42)" NONE << std::endl;
	try
	{
		std::cout << GREEN "Element found in condener : " << *(easyfind(condener2, 42)) << NONE << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << RED "NO MATCH !!!" NONE << std::endl;
		std::cout << e.what() << std::endl;
	}
	
	std::cout << ROSE "Test : easyfind(condener, 9)" NONE << std::endl;
	try
	{
		std::cout << GREEN "Element found in condener : " << *(easyfind(condener2, 9)) << NONE << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << RED "NO MATCH !!!" NONE << std::endl;
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	return (0);
}

void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "" << std::endl;
	std::cout << "    ______                            __   _               _" << std::endl;
	std::cout << "   |  ____|                          / _| (_)             | |" << std::endl;
	std::cout << "   | |__      __ _   ___   _   _    | |_   _   _ __     __| |" << std::endl;
	std::cout << "   |  __|    / _` | / __| | | | |   |  _| | | | '_ \\   / _` |" << std::endl;
	std::cout << "   | |____  | (_| | \\__ \\ | |_| |   | |   | | | | | | | (_| |" << std::endl;
	std::cout << "   |______|  \\__,_| |___/  \\__, |   |_|   |_| |_| |_|  \\__,_|" << std::endl;
	std::cout << "                            __/ |" << std::endl;
	std::cout << "                           |___/" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}
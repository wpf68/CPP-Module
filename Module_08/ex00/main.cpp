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

//	std::vector<int> container(5,56);
//	std::vector<int> container(7);
	std::vector<int> container = {0, 2, 45, 5, 56, 8};

	container.push_back(2);

	for (int i = 0; i < container.size(); i++)
		std::cout << YELLOW "Index :: container [" << i << "] = " << container[i] << NONE << std::endl;

	std::vector<int>::iterator it;
	for (it = container.begin(); it != container.end(); it++)
		std::cout << CYANE "Iterator :: container [" << &it << "] = " << *it << NONE << std::endl;

	std::cout << ROSE "Test : easyfind(container, 5)" NONE << std::endl;
	try
	{
		std::cout << GREEN "Element found in container : " << *(easyfind(container, 5)) << NONE << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << RED "NO MATCH !!!" NONE << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << ROSE "Test : easyfind(container, 9)" NONE << std::endl;
	try
	{
		std::cout << GREEN "Element found in container : " << *(easyfind(container, 9)) << NONE << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << RED "NO MATCH !!!" NONE << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << ROSE "\n--------------------------------- Test ** list ** ----------------------------------------\n" NONE << std::endl;

	std::list<int> container2 = {23, 23, 58, 45, 5};

	container2.push_back(42);

	/*   ------------- vector OK -- No permisse for list  ---------------------------------
	for (int i = 0; i < container2.size(); i++)
		std::cout << "container2 [" << i << "] = " << container2[i] << std::endl;
	*/
	std::list<int>::iterator it2;
	for (it2 = container2.begin(); it2 != container2.end(); it2++)
		std::cout << CYANE "Iterator :: container2 [" << &it2 << "] = " << *it2 << NONE << std::endl;

	std::cout << ROSE "Test : easyfind(container, 42)" NONE << std::endl;
	try
	{
		std::cout << GREEN "Element found in container : " << *(easyfind(container2, 42)) << NONE << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << RED "NO MATCH !!!" NONE << std::endl;
		std::cout << e.what() << std::endl;
	}
	
	std::cout << ROSE "Test : easyfind(container, 9)" NONE << std::endl;
	try
	{
		std::cout << GREEN "Element found in container : " << *(easyfind(container2, 9)) << NONE << std::endl;
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
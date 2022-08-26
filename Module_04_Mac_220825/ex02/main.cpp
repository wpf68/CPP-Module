/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:58:05 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/21 17:58:05 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "    _____   _                                       _             _                    _   _" << std::endl;
	std::cout << "   / ____| | |                                     | |           | |                  (_) | |" << std::endl;
	std::cout << "  | |      | |   __ _   ___   ___    ___     __ _  | |__    ___  | |_   _ __    __ _   _  | |_    ___" << std::endl;
	std::cout << "  | |      | |  / _` | / __| / __|  / _ \\   / _` | | '_ \\  / __| | __| | '__|  / _` | | | | __|  / _ \\" << std::endl;
	std::cout << "  | |____  | | | (_| | \\__ \\ \\__ \\ | __ /  | (_| | | |_) | \\__ \\ | |_  | |    | (_| | | | | |_  | __ /" << std::endl;
	std::cout << "   \\_____| |_|  \\__,_| |___/ |___ / \\___|   \\__,_| |_.__/  |___/  \\__| |_|     \\__,_| |_|  \\__|  \\___|" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	ft_present();

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << "\n ************************ " << std::endl;
	std::cout << "\n ************************ " << std::endl;

	/*  ***********  Impossible Classe abstraite  ***********
	Animal* tab = new Animal[10];
	for (int f = 0; f < 5; f++)
		tab[f] = Dog();
	for (int f = 5; f < 10; f++)
		tab[f] = Cat();
	for (int f = 0; f < 10; f++)
		tab[f].makeSound();  // no OK  --> no pointeurs
	delete [] tab;
	*/

	Animal* tab2 [10];
	for (int f = 0; f < 5; f++)
		tab2[f] = new Dog();
	for (int f = 5; f < 10; f++)
		tab2[f] = new Cat();
	for (int f = 0; f < 10; f++)
		tab2[f]->makeSound();  // OK  -->  pointeurs
	for (int f = 0; f < 10; f++)
		delete tab2[f];

	std::cout << "\n ************************ " << std::endl;

	//  ***********  Impossible Classe abstraite  ***********

//	Animal animal;

	return (0);
}
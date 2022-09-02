/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:04:12 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/21 11:04:12 by pwolff           ###   ########.fr       */
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
	std::cout << "        _" << std::endl;
	std::cout << "       | |" << std::endl;
	std::cout << "       | |   ___     _ __     ___    __   __   ___   _   _  __  __    _ __     __ _   ___" << std::endl;
	std::cout << "   _   | |  / _ \\   | '_ \\   / _ \\   \\ \\ / /  / _ \\ | | | | \\ \\/ /   | '_ \\   / _` | / __|" << std::endl;
	std::cout << "  | |__| | |  __/   | | | | |  __/    \\ V /  |  __/ | |_| |  >  <    | |_) | | (_| | \\__ \\" << std::endl;
	std::cout << "   \\____/   \\___|   |_| |_|  \\___|     \\_/    \\___|  \\__,_| /_/ \\_\\  | .__/   \\__,_| |___/" << std::endl;
	std::cout << "                                                                     | |" << std::endl;
	std::cout << "                                                                     |_|" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	ft_present();

	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;

		std::cout << "\n ************************ " << std::endl;
		std::cout << "\n ************************ " << std::endl;

		Animal* tab = new Animal[10];
		for (int f = 0; f < 5; f++)
			tab[f] = Dog();
		for (int f = 5; f < 10; f++)
			tab[f] = Cat();
		for (int f = 0; f < 10; f++)
			tab[f].makeSound();  // no OK  --> no pointeurs
		delete [] tab;


		Animal* tab2 [10];
		for (int f = 0; f < 5; f++)
			tab2[f] = new Dog();
		for (int f = 5; f < 10; f++)
			tab2[f] = new Cat();
		for (int f = 0; f < 10; f++)
			tab2[f]->makeSound();  // OK  -->  pointeurs
		for (int f = 0; f < 10; f++)
			delete tab2[f];
	}

	std::cout << "\n ************************ " << std::endl;
	std::cout << "\n ************************ " << std::endl;
	{
		Cat cat1p;
		Cat cat2p(cat1p);
	}

	std::cout << "\n ************************ " << std::endl;
	std::cout << " ************************ " << std::endl;
	{
		Cat cat1p;
		Cat cat2p;
		cat2p = cat1p;
	}

	std::cout << "\n ************************ " << std::endl;
	{
		Cat *p1 = new Cat("p1");
		Cat *p2 = new Cat("p2");

		*p2 = *p1;

		delete p1;
		delete p2;
	}
	return (0);
}
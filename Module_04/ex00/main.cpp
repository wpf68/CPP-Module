/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:24:01 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/20 17:24:01 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "   _____            _                                              _       _" << std::endl;
	std::cout << "  |  __ \\          | |                                            | |     (_)" << std::endl;
	std::cout << "  | |__) |   ___   | |  _   _   _ __ ___     ___    _ __   _ __   | |__    _   ___   _ __ ___     ___" << std::endl;
	std::cout << "  |  ___/   / _ \\  | | | | | | | '_ ` _ \\   / _ \\  | '__| | '_ \\  | '_ \\  | | / __| | '_ ` _ \\   / _ \\" << std::endl;
	std::cout << "  | |      | (_) | | | | |_| | | | | | | | | (_) | | |    | |_) | | | | | | | \\__ \\ | | | | | | |  __/" << std::endl;
	std::cout << "  |_|       \\___/  |_|  \\__, | |_| |_| |_|  \\___/  |_|    | .__/  |_| |_| |_| |___/ |_| |_| |_|  \\___|" << std::endl;
	std::cout << "                         __/ |                            | |" << std::endl;
	std::cout << "                        |___/                             |_|" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	ft_present();

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "\n ************************ " << std::endl;

	std::cout << meta->getType() << " " << std::endl;

	Cat k;

	std::cout << k.getType() << " " << std::endl;
	k.makeSound();

	Cat l (k);
	std::cout << l.getType() << " " << std::endl;
	l.makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "\n ************************ " << std::endl;
	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* i2 = new WrongCat();
	std::cout << i2->getType() << " " << std::endl;
	std::cout << meta2->getType() << " " << std::endl;

	i2->makeSound();
	meta2->makeSound();

	delete meta2;
	delete i2;
	std::cout << "\n ************************ " << std::endl;

	return (0);
}
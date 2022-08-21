/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:02:56 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/21 11:02:56 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*Public*/
/***************************************************************************************************************************/

								/*Constructor*/
/*===============================================================*/

Cat::Cat(void) : Animal("Cat")
{
	std::cout << CYANE "Constructor Cat by default called" NONE << std::endl;
	_Brain = new Brain();
}

Cat::Cat(const std::string& name = "Cat") : Animal(name)
{
	std::cout << YELLOW "Constructor WrongCat by name called" NONE << std::endl;
	_Brain = new Brain();
}

Cat::Cat(Cat const& src) : Animal(src), _Brain(new Brain(*src._Brain))
{
	std::cout << CYANE "Constructor Cat by copy called" NONE << std::endl;
	// *this = src;   copy superficielle
}

Cat& Cat::operator=(Cat const& rhs)
{
	std::cout << CYANE "Assignment operator Cat called" NONE << std::endl;
	if (this == &rhs)
		return (*this);

	_type = rhs._type;
	*_Brain = *rhs._Brain;
	
	return (*this);
}

/*Destructor*/
/*===============================================================*/

Cat::~Cat(void)
{
	std::cout << CYANE "Destructor Cat called" NONE << std::endl;
	delete _Brain;
}

/*===============================================================*/

void	Cat::makeSound(void) const
{
	std::cout << CYANE "Miaou Miaou" NONE << std::endl;
}
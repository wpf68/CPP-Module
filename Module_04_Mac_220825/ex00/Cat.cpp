/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:23:13 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/20 17:23:13 by pwolff           ###   ########.fr       */
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
}

Cat::Cat(const std::string& name) : Animal(name)
{
	std::cout << YELLOW "Constructor Cat by copy called" NONE << std::endl;
}

Cat::Cat(Cat const& src)
{
	std::cout << CYANE "Constructor Cat by copy called" NONE << std::endl;
	*this = src;
}

Cat& Cat::operator=(Cat const& rhs)
{
	std::cout << CYANE "Assignment operator Cat called" NONE << std::endl;
	if (this == &rhs)
		return (*this);

	this->_type = rhs._type;

	return (*this);
}

/*Destructor*/
/*===============================================================*/

Cat::~Cat(void)
{
	std::cout << CYANE "Destructor Cat called" NONE << std::endl;
}

/*===============================================================*/

void	Cat::makeSound(void) const
{
	std::cout << CYANE "Miaou Miaou" NONE << std::endl;
}
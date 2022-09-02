/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:23:41 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/20 17:23:41 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*Public*/
/***************************************************************************************************************************/

								/*Constructor*/
/*===============================================================*/

Dog::Dog(void) : Animal("Dog")
{
	std::cout << GREEN "Constructor Dog by default called" NONE << std::endl;
}

Dog::Dog(const std::string& name) : Animal(name)
{
	std::cout << YELLOW "Constructor Dog by copy called" NONE << std::endl;
}

Dog::Dog(Dog const& src)
{
	std::cout << GREEN "Constructor Dog by affectation called" NONE << std::endl;
	*this = src;
}

Dog& Dog::operator=(Dog const& rhs)
{
	std::cout << GREEN "Assignment operator Dog called" NONE << std::endl;
	if (this == &rhs)
		return (*this);

	this->_type = rhs._type;

	return (*this);
}

/*Destructor*/
/*===============================================================*/

Dog::~Dog(void)
{
	std::cout << GREEN "Destructor Dog called" NONE << std::endl;
}

/*===============================================================*/

void	Dog::makeSound(void) const
{
	std::cout << GREEN "Grrr Grrr Grrr" NONE << std::endl;
}
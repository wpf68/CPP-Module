/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:03:36 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/21 11:03:36 by pwolff           ###   ########.fr       */
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
	_Brain = new Brain();

}

Dog::Dog(const std::string& name) : Animal(name)
{
	std::cout << YELLOW "Constructor Dog by name called" NONE << std::endl;
	_Brain = new Brain();

}

Dog::Dog(Dog const& src) : Animal(src), _Brain(new Brain(*(src._Brain)))
{
	std::cout << GREEN "Constructor Dog by copy called" NONE << std::endl;
	// *this = src;  copy superficielle
}

Dog& Dog::operator=(Dog const& rhs)
{
	std::cout << GREEN "Assignment operator Dog called" NONE << std::endl;
	if (this == &rhs)
		return (*this);

	//*_Brain = *rhs._Brain;
	delete _Brain;
	_Brain = new Brain(*(rhs._Brain));
	_type = rhs._type;

	return (*this);
}

/*Destructor*/
/*===============================================================*/

Dog::~Dog(void)
{
	std::cout << GREEN "Destructor Dog called" NONE << std::endl;
	delete _Brain;
}

/*===============================================================*/

void	Dog::makeSound(void) const
{
	std::cout << GREEN "Grrr Grrr Grrr" NONE << std::endl;
}
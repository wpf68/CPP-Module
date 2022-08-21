/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:22:37 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/20 17:22:37 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*Public*/
/***************************************************************************************************************************/

								/*Constructor*/
/*===============================================================*/


Animal::Animal(void) : _type("Animal")
{
	std::cout << YELLOW "Constructor Animal by default called" NONE << std::endl;
}

Animal::Animal(Animal const& src)
{
	std::cout << YELLOW "Constructor Animal by copy called" NONE << std::endl;
	*this = src;
}

Animal::Animal(const std::string& name = "Animal") : _type(name)
{
	std::cout << YELLOW "Constructor Animal by copy called" NONE << std::endl;
}

Animal& Animal::operator=(Animal const& rhs)
{
	std::cout << YELLOW "Assignment operator Animal called" NONE << std::endl;
	if (this == &rhs)
		return (*this);

	this->_type = rhs._type;

	return (*this);
}

/*Destructor*/
/*===============================================================*/

Animal::~Animal(void)
{
	std::cout << YELLOW "Destructor Animal called" NONE << std::endl;
}

/*Geters*/
/*===============================================================*/

std::string	Animal::getType(void) const
{
	//std::cout << YELLOW "Type = " NONE << _type << std::endl;
	return (_type);
}

/*===============================================================*/

void	Animal::makeSound(void) const
{
	std::cout << YELLOW " NONE " NONE << std::endl;
}

/*===============================================================*/

std::ostream& operator<<(std::ostream& o, Animal& rhs)
{
	o << rhs.getType();
	return (o);
}
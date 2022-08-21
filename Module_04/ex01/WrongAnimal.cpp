/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:24:52 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/20 17:24:52 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*Public*/
/***************************************************************************************************************************/

								/*Constructor*/
/*===============================================================*/


WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << YELLOW "Constructor WrongAnimal by default called" NONE << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& src)
{
	std::cout << YELLOW "Constructor WrongAnimal by copy called" NONE << std::endl;
	*this = src;
}

WrongAnimal::WrongAnimal(const std::string& name = "WrongAnimal") : _type(name)
{
	std::cout << YELLOW "Constructor WrongAnimal by copy called" NONE << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& rhs)
{
	std::cout << YELLOW "Assignment operator WrongAnimal called" NONE << std::endl;
	if (this == &rhs)
		return (*this);

	this->_type = rhs._type;

	return (*this);
}

/*Destructor*/
/*===============================================================*/

WrongAnimal::~WrongAnimal(void)
{
	std::cout << YELLOW "Destructor WrongAnimal called" NONE << std::endl;
}

/*Geters*/
/*===============================================================*/

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

/*===============================================================*/

void	WrongAnimal::makeSound(void) const
{
	std::cout << YELLOW " NONE WRONGANIMAL " NONE << std::endl;
}

/*===============================================================*/

std::ostream& operator<<(std::ostream& o, WrongAnimal& rhs)
{
	o << rhs.getType();
	return (o);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:25:23 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/20 17:25:23 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

/*Public*/
/***************************************************************************************************************************/

								/*Constructor*/
/*===============================================================*/

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << CYANE "Constructor WrongCat by default called" NONE << std::endl;
}

WrongCat::WrongCat(const std::string& name ) : WrongAnimal(name)
{
	std::cout << YELLOW "Constructor WrongCat by copy called" NONE << std::endl;
}

WrongCat::WrongCat(WrongCat const& src)
{
	std::cout << CYANE "Constructor WrongCat by affectation called" NONE << std::endl;
	*this = src;
}

WrongCat& WrongCat::operator=(WrongCat const& rhs)
{
	std::cout << CYANE "Assignment operator WrongCat called" NONE << std::endl;
	if (this == &rhs)
		return (*this);

	this->_type = rhs._type;

	return (*this);
}

/*Destructor*/
/*===============================================================*/

WrongCat::~WrongCat(void)
{
	std::cout << CYANE "Destructor WrongCat called" NONE << std::endl;
}

/*===============================================================*/

void	WrongCat::makeSound(void) const
{
	std::cout << CYANE "Miaou Miaou WRONGCAT" NONE << std::endl;
}
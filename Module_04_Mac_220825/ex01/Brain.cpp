/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:01:32 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/21 11:01:32 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*Public*/
/***************************************************************************************************************************/

								/*Constructor*/
/*===============================================================*/


Brain::Brain(void) : _type("Brain")
{
	std::cout << YELLOW "Constructor Brain by default called" NONE << std::endl;
}

Brain::Brain(Brain const& src)
{
	std::cout << YELLOW "Constructor Brain by copy called" NONE << std::endl;
	*this = src;
}

Brain::Brain(const std::string& name) : _type(name)
{
	std::cout << YELLOW "Constructor Brain by name called" NONE << std::endl;
}

Brain& Brain::operator=(Brain const& rhs)
{
	std::cout << YELLOW "Assignment operator Brain called" NONE << std::endl;
	if (this == &rhs)
		return (*this);

	this->_type = rhs._type;

	return (*this);
}

/*Destructor*/
/*===============================================================*/

Brain::~Brain(void)
{
	std::cout << YELLOW "Destructor Brain called" NONE << std::endl;
}

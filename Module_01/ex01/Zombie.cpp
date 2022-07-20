/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:42:00 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/20 10:42:00 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

	/*Constructor*/
Zombie::Zombie(void)
{
	static int	nb_created = 0;

	nb_created += 1;
	std::cout << GREEN << nb_created << WHITE " is created" << NONE << std::endl;
}

	/*Destructor*/
Zombie::~Zombie(void)
{
	static int	nb_destroy = 0;

	nb_destroy += 1;
	std::cout << RED << this->_name << GREEN " : "  << nb_destroy << WHITE << " is destroy" << NONE << std::endl;
}


	/*Seters*/
void	Zombie::setName(std::string name)
{
	this->_name = name;

}


	/*Geters*/
void	Zombie::announce(void)
{
	std::cout << RED << this->_name << WHITE << ": BraiiiiiiinnnzzzZ..." << NONE << std::endl;
}
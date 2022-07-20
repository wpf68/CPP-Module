/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:03:55 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/20 11:03:55 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{

}

HumanB::~HumanB()
{
}


void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << (* this->_weaponPTR).getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &club)
{
	this->_weaponPTR = &club;

}
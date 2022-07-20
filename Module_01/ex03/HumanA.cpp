/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:03:37 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/20 11:03:37 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weaponREF(weapon)
{
}

HumanA::~HumanA()
{
}


void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weaponREF.getType() << std::endl;
}
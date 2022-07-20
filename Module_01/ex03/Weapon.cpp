/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:04:48 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/20 11:04:48 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon()
{
}


std::string const&	Weapon::getType(void)
{
	std::string const& armeREF = this->_type;

	return (armeREF);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;


}
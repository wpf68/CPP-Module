/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:10:41 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/20 14:10:41 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*Public*/
/***************************************************************************************************************************/

								/*Constructor*/
/*===============================================================*/

ScavTrap::ScavTrap(void)
{
	std::cout << "Constructor ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap::ClapTrap(name)
{
	std::cout << "Constructor ScavTrap" << std::endl;

	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	ClapTrap::getStatusPlayer2();
}

ScavTrap::ScavTrap(ScavTrap const& src) : ClapTrap(src)
{
	std::cout << RED "Constructor ScavTrap" NONE << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& rhs)
{
	std::cout << "Copy assignment operator called ScavTrap" << std::endl;
	if (this == &rhs)
		return(*this);

	this->_Name = rhs._Name;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;

	std::cout << _Name << " = " << GREEN << rhs._Name << NONE << std::endl;

	return (*this);
}

/*Destructor*/
/*===============================================================*/

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap" << std::endl;
}

/*===============================================================*/
/*===============================================================*/

void	ScavTrap::attack(const std::string& target)
{
	std::cout << RED "Attack ScavTrap" NONE << std::endl;
	ClapTrap::attack(target);
}

void	ScavTrap::guardGate(void)
{
	std::cout << RED "ScavTrap : " << _Name << " came into Gate Keeper mode. " NONE << std::endl;
}
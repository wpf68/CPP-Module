/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:22:44 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/20 14:22:44 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*Public*/
/***************************************************************************************************************************/

								/*Constructor*/
/*===============================================================*/

DiamondTrap::DiamondTrap()
{
	std::cout << "Constructor DiamondTrap" << std::endl;
	_Name = "DiamondTrap";
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	std::cout << "Constructor DiamondTrap" << std::endl;

	_HitPoints = this->FragTrap::_HitPoints;
	_EnergyPoints = 50;
	_AttackDamage = this->FragTrap::_AttackDamage;
	_Name = name;

	DiamondTrap::getStatusPlayer2();
}

DiamondTrap::DiamondTrap(DiamondTrap const& src)
{
	std::cout << "Constructor DiamondTrap" << std::endl;
	ClapTrap::_Name = this->_Name + "_clap_name";
	*this = src;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& rhs)
{
	std::cout << "Copy assignment operator called DiamondTrap" << std::endl;
	if (this == &rhs)
		return(*this);

	this->_Name = rhs._Name;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;
	ClapTrap::_Name = this->_Name + "_clap_name";

	return (*this);
}

/*Destructor*/
/*===============================================================*/

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap" << std::endl;
}

/*===============================================================*/

void	DiamondTrap::attack(const std::string& target)
{
	std::cout << RED "Attack DiamondTrap" NONE << std::endl;
	ScavTrap::attack(target);
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	FragTrap::takeDamage(amount);
}

/* *** Getter *** */
/*===============================================================*/

int		DiamondTrap::getDamage(void) const
{
	return (FragTrap::getDamage());
}

void	DiamondTrap::getStatusPlayer2(void) const
{
	std::cout << NONE "\n - Name          : " CYANE << this->_Name;
	std::cout << NONE "\n - Hit points    : " GREEN << this->_HitPoints;
	std::cout << NONE "\n - Energy points : " GREEN << this->_EnergyPoints;
	std::cout << NONE "\n - Attack damage : " GREEN << this->_AttackDamage << NONE << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << NONE "\n - Name DiamondTrap  : " CYANE << this->_Name;
	std::cout << NONE "\n - Name ClapTrap     : " CYANE << ClapTrap::_Name;
}
	
void	DiamondTrap::hightFivesGuys(void)
{
	FragTrap::hightFivesGuys();
}
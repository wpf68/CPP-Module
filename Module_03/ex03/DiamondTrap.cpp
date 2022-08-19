/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:26:05 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/19 13:26:05 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Constructor DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	std::cout << "Constructor DiamondTrap" << std::endl;

	_HitPoints = this->FragTrap::_HitPoints;
	_EnergyPoints = 50;
	_AttackDamage = this->FragTrap::_AttackDamage;
	_Name = name;

	/*
	ScavTrap(name);
	this->_EnergyPoints = this->ScavTrap::_EnergyPoints;

	FragTrap::FragTrap(name);
	this->_HitPoints = this->FragTrap::_HitPoints;
	this->_AttackDamage = this->FragTrap::_AttackDamage;
	*/

	DiamondTrap::getStatusPlayer2();
}

DiamondTrap::DiamondTrap(FragTrap const& src)
{
	std::cout << "Constructor DiamondTrap" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap" << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	std::cout << RED "Attack DiamondTrap" NONE << std::endl;
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << NONE "\n - Name DiamondTrap  : " CYANE << this->_Name;
	std::cout << NONE "\n - Name ClapTrap     : " CYANE << ClapTrap::_Name;
}

void	DiamondTrap::getStatusPlayer2(void) const
{
	std::cout << NONE "\n - Name          : " CYANE << this->_Name;
	std::cout << NONE "\n - Hit points    : " GREEN << this->_HitPoints;
	std::cout << NONE "\n - Energy points : " GREEN << this->_EnergyPoints;
	std::cout << NONE "\n - Attack damage : " GREEN << this->_AttackDamage << NONE << std::endl;
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	FragTrap::takeDamage(amount);
}

int		DiamondTrap::getDamage(void) const
{
	return (FragTrap::getDamage());
}

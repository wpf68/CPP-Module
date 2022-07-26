/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:55:35 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/20 13:55:35 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*Public*/
/***************************************************************************************************************************/

								/*Constructor*/
/*===============================================================*/

ClapTrap::ClapTrap(void)
{
	_Name = "HERO";
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 10;

	std::cout << CYANE;
	std::cout << _Name << GREEN " is created" NONE << std::endl;
	std::cout << WHITE "\tAttack damage : " << _AttackDamage << std::endl;
	std::cout << "\tEnergy points : " << _EnergyPoints << std::endl;
	std::cout << "\tHit points    : " << _HitPoints << NONE << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src)
{
	std::cout << WHITE "Copy constructor called" NONE << std::endl;
	*this = src;
	std::cout << CYANE;
	std::cout << _Name << GREEN " is created" NONE << std::endl;
	std::cout << WHITE "\tAttack damage : " << _AttackDamage << std::endl;
	std::cout << "\tEnergy points : " << _EnergyPoints << std::endl;
	std::cout << "\tHit points    : " << _HitPoints << NONE << std::endl;

	return;
}

ClapTrap::ClapTrap(const std::string& name) : _Name(name)
{
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;

	std::cout << CYANE;
	std::cout << _Name << GREEN " is created" NONE << std::endl;
	std::cout << WHITE "\tAttack damage : " << _AttackDamage << std::endl;
	std::cout << "\tEnergy points : " << _EnergyPoints << std::endl;
	std::cout << "\tHit points    : " << _HitPoints << NONE << std::endl;
}

/*Destructor*/
/*===============================================================*/

ClapTrap::~ClapTrap(void)
{
	std::cout << RED << _Name << " is destroyed" NONE << std::endl;
}

/*===============================================================*/

ClapTrap& ClapTrap::operator=(ClapTrap const& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;

	std::cout << _Name << " = " << GREEN << rhs._Name << NONE << std::endl;
	if (this == &rhs)
		return(*this);

	this->_Name = rhs._Name;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;

	std::cout << CYANE;
	
	std::cout << WHITE "\tAttack damage : " << _AttackDamage << std::endl;
	std::cout << "\tEnergy points : " << _EnergyPoints << std::endl;
	std::cout << "\tHit points    : " << _HitPoints << NONE << std::endl;

	return (*this);
}

/*===============================================================*/

void	ClapTrap::attack(const std::string& target)
{
	_EnergyPoints--;

	if (_EnergyPoints < 0 || _HitPoints <= 0)
	{
		_EnergyPoints++;
		std::cout << RED "Attack impossible :" << std::endl;
		getStatusPlayer(_EnergyPoints, _HitPoints);
		return;
	}

	std::cout << "\nClapTrap " CYANE << ClapTrap::_Name << NONE " attacks " CYANE << target;
	std::cout << NONE ", causing " RED << ClapTrap::_AttackDamage << NONE " points of damage !";

	/* ===============     Three    Methods  ===========================================*/
	getStatusPlayer(_EnergyPoints, _HitPoints);
	// ClapTrap::getStatusPlayer2();  // OK
	// this->getStatusPlayer2();      // OK
	/* =================================================================================*/
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_HitPoints -= amount;

	std::cout << CYANE << _Name << WHITE " suffered " RED << amount;
	std::cout << WHITE " points of damage" << std::endl;
	if (_HitPoints <= 0)
		std::cout << NONE "ClapTrap : " CYANE << _Name << RED " is dead !!" NONE << std::endl;
	getStatusPlayer(_EnergyPoints, _HitPoints);

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	_EnergyPoints--;

	if (_EnergyPoints < 0 || _HitPoints <= 0)
	{
		_EnergyPoints++;
		std::cout << RED "Care impossible :";
		getStatusPlayer(_EnergyPoints, _HitPoints);
		return;
	}
	_HitPoints += amount;
	std::cout << "\nClapTrap " CYANE << ClapTrap::_Name << NONE " repaired of the " CYANE << amount;
	std::cout << NONE " points " << " and :";
	getStatusPlayer(_EnergyPoints, _HitPoints);
}

/*Geters*/
/*===============================================================*/

std::string	ClapTrap::getName(void) const
{
	return (_Name);
}

int		ClapTrap::getDamage(void) const
{
	return (_AttackDamage);
}

void	ClapTrap::getStatusPlayer2(void) const
{
	std::cout << NONE "\n - Energy points : " GREEN << _EnergyPoints;
	std::cout << NONE "\n - Hit points    : " GREEN << _HitPoints << NONE << std::endl;
}


/*===============================================================*/
/*===============================================================*/

std::ostream& operator<<(std::ostream& o, ClapTrap const& rhs)
{
	o << rhs.getName();

	return (o);
}

void		getStatusPlayer(int energy, int hit)
{
	std::cout << NONE "\n - Energy points : " GREEN << energy;
	std::cout << NONE "\n - Hit points    : " GREEN << hit << NONE << std::endl;
}
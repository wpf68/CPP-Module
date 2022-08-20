/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:49:17 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/18 15:49:17 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*Public*/
/***************************************************************************************************************************/

								/*Constructor*/
/*===============================================================*/

ClapTrap::ClapTrap(void)
{
	std::cout << "Constructor ClapTrap" << std::endl;
	_Name = "ClapTrap";
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 10;
}

ClapTrap::ClapTrap(ClapTrap const& src)
{
	std::cout << WHITE "Copy constructor ClapTrap called" NONE << std::endl;
	*this = src;
	std::cout << CYANE;
	std::cout << _Name << GREEN " is created" NONE << std::endl;
	ClapTrap::getStatusPlayer2();

	return;
}

ClapTrap::ClapTrap(const std::string& name) : _Name(name)
{
	std::cout << "Constructor ClapTrap" << std::endl;
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;

	std::cout << CYANE;
	std::cout << _Name << GREEN " is created" NONE << std::endl;
	ClapTrap::getStatusPlayer2();

}

/*Destructor*/
/*===============================================================*/

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor ClapTrap" << std::endl;
	std::cout << RED << _Name << " is destroyed" NONE << std::endl;
}

/*===============================================================*/

ClapTrap& ClapTrap::operator=(ClapTrap const& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return(*this);
	
	this->_Name = rhs._Name;
	this->_HitPoints = rhs._HitPoints;
	this->_EnergyPoints = rhs._EnergyPoints;
	this->_AttackDamage = rhs._AttackDamage;

	std::cout << _Name << " = " << GREEN << rhs._Name << NONE << std::endl;

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
	//std::string const name = _Name;

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
	std::cout << NONE "\n - Name          : " CYANE << _Name;
	std::cout << NONE "\n - Hit points    : " GREEN << _HitPoints;
	std::cout << NONE "\n - Energy points : " GREEN << _EnergyPoints;
	std::cout << NONE "\n - Attack damage : " GREEN << _AttackDamage << NONE << std::endl;
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:17:48 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/18 19:17:48 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*Public*/
/***************************************************************************************************************************/

								/*Constructor*/
/*===============================================================*/

FragTrap::FragTrap(void)
{
	std::cout << "Constructor FragTrap" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap::ClapTrap(name)
{
	std::cout << "Constructor FragTrap" << std::endl;

	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	ClapTrap::getStatusPlayer2();
}

FragTrap::FragTrap(FragTrap const& src) : ClapTrap(src)
{
	std::cout << RED "Constructor FragTrap" NONE << std::endl;
}

/*Destructor*/
/*===============================================================*/

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor FragTrap" << std::endl;
}

/*===============================================================*/
/*===============================================================*/

void	FragTrap::attack(const std::string& target)
{
	std::cout << RED "Attack FragTrap" NONE << std::endl;
	ClapTrap::attack(target);
}

void	FragTrap::hightFivesGuys(void)
{
	std::cout << RED "FragTrap : " << _Name << " hight Fives !!! " NONE << std::endl;
}


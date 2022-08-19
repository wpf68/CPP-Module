/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:25:54 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/19 13:25:54 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"


class DiamondTrap : public ScavTrap, FragTrap
{
public:
	DiamondTrap();
	DiamondTrap(const std::string& name);
	DiamondTrap(FragTrap const& src);
	virtual ~DiamondTrap();

	void	attack(const std::string& target);
	void	whoAmI();
	void	getStatusPlayer2(void) const;
	void	takeDamage(unsigned int amount);
	int		getDamage(void) const;



private:
	std::string		_Name;

};

#endif


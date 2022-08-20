/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:24:07 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/20 14:24:07 by pwolff           ###   ########.fr       */
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
	DiamondTrap(DiamondTrap const& src);
	DiamondTrap& operator=(DiamondTrap const& rhs);
	virtual ~DiamondTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	int		getDamage(void) const;
	void	getStatusPlayer2(void) const;
	void	whoAmI();
	void	hightFivesGuys(void);

private:
	std::string		_Name;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:50:23 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/18 15:50:23 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(const std::string& name);
	ScavTrap(ScavTrap const& src);
	ScavTrap& operator=(ScavTrap const& rhs);

	virtual ~ScavTrap(void);

	void	attack(const std::string& target);
	void	guardGate(void);

private:
};

#endif 
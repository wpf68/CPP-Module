/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:11:07 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/20 14:11:07 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(const std::string& name);
	ScavTrap(ScavTrap const& src);
	ScavTrap& operator=(ScavTrap const& rhs);

	~ScavTrap(void);

	void	attack(const std::string& target);
	void	guardGate(void);

private:

};

#endif 
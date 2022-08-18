/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:49:31 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/18 15:49:31 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

# ifndef COLOR
#  define COLOR
#  define CLEAR		"\x1B[2J\x1B[H"
#  define NONE		"\033[0;37m"
#  define WHITE		"\033[1;37m"
#  define RED		"\033[1;31m"
#  define GREEN		"\033[1;32m"
#  define CYANE		"\033[1;36m"
#  define ORANGE	"\033[1,38m"
#  define YELLOW	"\033[1;33m"
#  define BLUE		"\033[1,34m"
#  define GREY		"\033[1,37m"
#  define ROSE		"\033[1,35m"
# endif

class ClapTrap
{
public:
	ClapTrap(void);
	ClapTrap(ClapTrap const& src);
	~ClapTrap(void);
	ClapTrap& operator=(ClapTrap const &rhs);

	ClapTrap(const std::string& name);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string	getName(void) const;
	int			getDamage(void) const;
	/*
	int		getHitPoints(void);
	int		getEnnergyPoints(void);
	int		getAttackDamage(void);
	*/
	void	getStatusPlayer2(void) const;

protected:
	std::string		_Name;
	int				_HitPoints;
	int				_EnergyPoints;
	int				_AttackDamage;
};

std::ostream& operator<<(std::ostream& o, ClapTrap const& rhs);
void		getStatusPlayer(int energy, int hit);

#endif

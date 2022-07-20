/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:04:56 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/20 11:04:56 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include<iostream>
# include<string>

#ifndef COLOR
# define COLOR

# define CLEAR		"\x1B[2J\x1B[H"
# define NONE		"\033[0;37m"

# define WHITE		"\033[1;37m"
# define RED		"\033[1;31m"
# define GREEN		"\033[1;32m"
# define CYANE		"\033[1;36m"
# define ORANGE		"\033[1,38m"
# define YELLOW		"\033[1;33m"
# define BLUE		"\033[1,34m" 

#endif

class Weapon
{
public:
	Weapon(std::string type);
	~Weapon(void);

	std::string const&	getType(void);
	void				setType(std::string type);

private:
	std::string	_type;

};

#endif

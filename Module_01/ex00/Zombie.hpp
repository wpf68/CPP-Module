/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:34:08 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/20 10:34:08 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include<iostream>
# include<string>
# include<iomanip>

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

class Zombie
{
public:
	Zombie(std::string name);
	~Zombie(void);
	void announce(void);

private:
	std::string	_name;
};

#endif

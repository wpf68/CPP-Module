/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:25:05 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/20 17:25:05 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

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

class WrongAnimal
{
public:
	WrongAnimal(void);   // sinon ambigu avec  ==>	WrongAnimal::WrongAnimal(const std::string& name = "WrongAnimal") : _type(name)
	WrongAnimal(WrongAnimal const& src);
	WrongAnimal(const std::string& name);
	WrongAnimal& operator=(WrongAnimal const& rhs);
	virtual ~WrongAnimal(void);

	void			makeSound(void) const;
	std::string		getType(void) const;

protected:
	std::string	_type;
};

std::ostream& operator<<(std::ostream& o, WrongAnimal& rhs);

#endif
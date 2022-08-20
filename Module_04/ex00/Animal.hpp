/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:22:49 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/20 17:22:49 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

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

class Animal
{
public:
	Animal(void);   // sinon ambigu avec  ==>	Animal::Animal(const std::string& name = "Animal") : _type(name)
	Animal(Animal const& src);
	Animal(const std::string& name);
	Animal& operator=(Animal const& rhs);
	virtual ~Animal(void);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;

protected:
	std::string	_type;
};

std::ostream& operator<<(std::ostream& o, Animal & rhs);

#endif

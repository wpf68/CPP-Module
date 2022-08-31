/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:06:33 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/31 14:06:33 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

class Intern;
class Form;

# include <string>
# include <iostream>
# include <exception>
# include "Form.hpp"

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
#  define UNDER		"\033[4m"
#  define END		"\033[0m"

# endif

class Intern
{
public:
	Intern(void);
	Intern(Intern const& src);
	Intern& operator=(const Intern& rhs);
	virtual ~Intern(void);

	Form* makeForm(std::string const &nameForm , std::string const &targetForm) const;

	class FormErrorException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Error Formulary !!!");
		}
	};

private:
};

#endif
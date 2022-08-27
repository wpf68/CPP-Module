/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:00:38 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/26 16:00:38 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>

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

# define MAXI_GRADE 1
# define MINI_GRADE 150

class Bureaucrat
{
public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const& src);
	Bureaucrat& operator=(const Bureaucrat& rhs);

	virtual ~Bureaucrat(void);

	const std::string& getName(void) const;
	int			getGrade(void) const;
	void		setUpGrade(void);
	void		setDownGrade(void);

	
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what(void) const throw();
	};


	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what(void) const throw();
	};
	
private:
	std::string const	_name;
	int					_grade;
};

std::ostream& operator<<(std::ostream& o, Bureaucrat & rhs);

#endif
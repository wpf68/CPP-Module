/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:11:55 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/27 17:11:55 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Form;
class Bureaucrat;

# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"


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

class Form
{
public:
	Form(void);
	Form(std::string name, int gradeSign, int gradeExec);
	Form(Form const& src);
	Form& operator=(const Form& rhs);

	virtual ~Form(void);

	const std::string& getName(void) const;
	bool		getSign(void) const;
	int			getGradeSign(void) const;
	int			getGradeExec(void) const;

	virtual void execute(Bureaucrat const& executor) const = 0;

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

	void beSigned(Bureaucrat& buro);

private:
	std::string const	_name;
	bool				_sign;
	int	const			_gradeSign;
	int	const			_gradeExec;
};

std::ostream& operator<<(std::ostream& o, Form& rhs);

#endif

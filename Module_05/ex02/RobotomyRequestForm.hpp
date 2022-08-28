/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:31:57 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/28 17:31:57 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

class Form;
class RobotomyRequestForm;

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

# define SIGNATURE_ROBOT 72
# define EXECUTION_ROBOT 45

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const& src);
	RobotomyRequestForm& operator=(RobotomyRequestForm const& rhs);

	virtual ~RobotomyRequestForm(void);

	const std::string& getTarget(void) const;
	void	execute(Bureaucrat const& executor) const;

	class FormNotSignet : public std::exception
	{
	public:
		virtual const char* what(void) const throw();
	};

private:
	std::string	_target;
};

std::ostream& operator<<(std::ostream& o, RobotomyRequestForm& rhs);

#endif
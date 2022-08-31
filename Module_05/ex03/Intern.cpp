/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:05:37 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/31 14:05:37 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

/*Public*/
/***************************************************************************************************************************/

								/*Constructor*/
/*===============================================================*/

Intern::Intern(void)
{
	std::cout << YELLOW "Constructor Intern by default called" NONE << std::endl;
	std::cout << GREEN "Constructor OK" NONE << std::endl;
}

Intern::Intern(Intern const& src)
{
	if (this != &src)
	{
		std::cout << YELLOW "Constructor Intern by copy called" NONE << std::endl;
		*this = src;
	}
}

Intern& Intern::operator=(const Intern& rhs)
{
	std::cout << YELLOW "Assignment operator Intern called" NONE << std::endl;
	
	return (*this);
}

/*Destructor*/
/*===============================================================*/

Intern::~Intern(void)
{
	std::cout << YELLOW "Destructor Intern called" NONE << std::endl;
}

/*===============================================================*/
/*===============================================================*/

Form* Intern::makeForm(std::string const &nameForm, std::string const &targetForm) const
{
	Form* Cform;

	std::string choice[3]
	{
		"presidential pardon",
		"robotomy request",
		"shrubbery creation",
	};

	for (int i = 0; i < 3; i++)
	{
		if (choice[i] == nameForm)
		{
			switch (i)
			{
			case 0:
				Cform = new PresidentialPardonForm(targetForm);
				break;
			case 1:
				Cform = new RobotomyRequestForm(targetForm);
				break;
			case 2:
				Cform = new ShrubberyCreationForm(targetForm);
				break;
			default:
				break;
			}
			return (Cform);
		}
	}
	throw Intern::FormErrorException();

	/*   -- without exception --
	std::cout << RED << nameForm << " : Error Formulary !!!" NONE << std::endl;
	return (NULL);
	*/
}


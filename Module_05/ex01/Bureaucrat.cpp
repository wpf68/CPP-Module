/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:11:17 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/27 17:11:17 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

/*Public*/
/***************************************************************************************************************************/

								/*Constructor*/
/*===============================================================*/


Bureaucrat::Bureaucrat(void) : _name("Bureaucrat"), _grade(MINI_GRADE)
{
	std::cout << YELLOW "Constructor Bureaucrat by default called" NONE << std::endl;
	std::cout << GREEN "Constructor OK" NONE << std::endl;
	std::cout << *this << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	{
		if (grade < MAXI_GRADE)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > MINI_GRADE)
			throw Bureaucrat::GradeTooLowException();
		else
		{	
			std::cout << YELLOW "Constructor Bureaucrat by affectation called" NONE << std::endl;
			_grade = grade;
			std::cout << GREEN "Constructor OK" NONE << std::endl;
			std::cout << *this << std::endl;
		}
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const& src) : _name(src._name), _grade(src._grade)
{
	std::cout << YELLOW "Constructor Bureaucrat by copy called" NONE << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat & rhs)
{
	std::cout << YELLOW "Assignment operator Bureaucrat called" NONE << std::endl;
	if (this == &rhs)
		return (*this);

	const_cast<std::string&>(_name) = rhs.getName();
	_grade = rhs.getGrade();

	return (*this);
}

/*Destructor*/
/*===============================================================*/

Bureaucrat::~Bureaucrat(void)
{
	std::cout << YELLOW "Destructor Bureaucrat called" NONE << std::endl;
}

/*Geters*/
/*===============================================================*/

const std::string& Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (_grade);
}

/*Seters*/
/*===============================================================*/

void Bureaucrat::setUpGrade(void)
{
	if (_grade == MAXI_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		_grade--;
		std::cout << GREEN "serUpGrade OK" NONE << std::endl;
		std::cout << *this << std::endl;
	}
}
	
void Bureaucrat::setDownGrade(void)
{
	if (_grade == MINI_GRADE)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		_grade++;
		std::cout << GREEN "setDownGrade OK" NONE << std::endl;
		std::cout << *this << std::endl;
	}
}

void Bureaucrat::signForm(Form& f)
{
	if ((f.getSign()) == true)
		std::cout << GREEN << f.getName() << " is already signed !!!" NONE << std::endl;
	else if (_grade > f.getGradeSign())
		std::cout << RED << _name << " couldn't sign " << f.getName() << " because grade invalid" NONE << std::endl;
	else
		std::cout << YELLOW "Let's go to Signe :) " NONE << std::endl;
}		



/*===============================================================*/

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	std::cout << RED "grade < " << MAXI_GRADE << " !!!" << std::endl;

	return ("Error Hight");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	std::cout << RED "grade > " << MINI_GRADE << " !!!" << std::endl;

	return ("Error Low");
}

/*===============================================================*/

std::ostream& operator<<(std::ostream& o, Bureaucrat& rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}
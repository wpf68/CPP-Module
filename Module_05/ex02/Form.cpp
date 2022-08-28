/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:28:46 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/28 17:28:46 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

/*Public*/
/***************************************************************************************************************************/

								/*Constructor*/
/*===============================================================*/

Form::Form(void) : _name("Form"), _sign(false), _gradeSign(0), _gradeExec(0)
{
	std::cout << YELLOW "Constructor Form by default called" NONE << std::endl;
	std::cout << GREEN "Constructor OK" NONE << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _sign(false), _gradeSign(0), _gradeExec(0)
{
	{
		if (gradeSign < MAXI_GRADE || gradeExec < MAXI_GRADE)
			throw Form::GradeTooHighException();
		else if (gradeSign > MINI_GRADE || gradeExec > MINI_GRADE)
			throw Form::GradeTooLowException();
		else
		{
			std::cout << YELLOW "Constructor Form by affectation called" NONE << std::endl;
			const_cast<int&>(_gradeSign) = gradeSign;
			const_cast<int&>(_gradeExec) = gradeExec;
			std::cout << GREEN "Constructor OK" NONE << std::endl;
		}
	}
}

Form::Form(Form const& src) : _name(src._name), _sign(src._sign), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec)
{
	std::cout << YELLOW "Constructor Form by copy called" NONE << std::endl;
}

Form& Form::operator=(const Form& rhs)
{
	std::cout << YELLOW "Assignment operator Form called" NONE << std::endl;
	if (this == &rhs)
		return (*this);

	const_cast<std::string&>(_name) = rhs.getName();
	_sign = rhs._sign;
	const_cast<int&>(_gradeSign) = rhs._gradeSign;
	const_cast<int&>(_gradeExec) = rhs._gradeExec;

	return (*this);
}

/*Destructor*/
/*===============================================================*/

Form::~Form(void)
{
	std::cout << YELLOW "Destructor Form called" NONE << std::endl;
}

/*Geters*/
/*===============================================================*/

const std::string& Form::getName(void) const
{
	return (_name);
}

bool Form::getSign(void) const
{
	return (_sign);
}

int Form::getGradeSign(void) const
{
	return (_gradeSign);
}

int Form::getGradeExec(void) const
{
	return (_gradeExec);
}

/*Seters*/
/*===============================================================*/

void Form::beSigned(Bureaucrat& buro)
{
	buro.signForm(*this);

	if (buro.getGrade() > _gradeSign)
	{
		std::cout << _name << RED " : No Signed" NONE << std::endl;
		std::cout << *this << std::endl;
		throw Form::GradeTooLowException();
	}
	else
	{
		_sign = true;
		std::cout << _name << GREEN " : Signed" NONE << std::endl;
		std::cout << *this << std::endl;
	}
}

void Form::execute(Bureaucrat const& executor) const
{
}

/*===============================================================*/

const char* Form::GradeTooHighException::what(void) const throw()
{
	std::cout << RED "grade < " << MAXI_GRADE << " !!!" << std::endl;

	return ("Error Hight");
}

const char* Form::GradeTooLowException::what(void) const throw()
{
	return ("Error Low");
}

/*===============================================================*/

std::ostream& operator<<(std::ostream& o, Form& rhs)
{
	o << rhs.getName() << ", sign : ";
	if (rhs.getSign() == false)
		o << RED "No Signed" NONE;
	else
		o << GREEN "Signed" NONE;
	o << "\nGrade Sign : " << rhs.getGradeSign() ;
	o << "\nGrade Exec : " << rhs.getGradeExec();

	return (o);
}
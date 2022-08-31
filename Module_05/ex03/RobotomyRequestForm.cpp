/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:31:26 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/28 17:31:26 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

/*Public*/
/***************************************************************************************************************************/

								/*Constructor*/
/*===============================================================*/

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", SIGNATURE_ROBOT, EXECUTION_ROBOT), _target("RobotomyRequestForm_target")
{
	std::cout << YELLOW "Constructor RobotomyRequestForm by default called" NONE << std::endl;
	std::cout << GREEN "Constructor OK" NONE << std::endl;
	std::cout << *this << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", SIGNATURE_ROBOT, EXECUTION_ROBOT), _target(target)
{
	std::cout << YELLOW "Constructor RobotomyRequestForm by affectation called" NONE << std::endl;
	std::cout << *this << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src) : _target(src._target)
{
	std::cout << YELLOW "Constructor RobotomyRequestForm by copy called" NONE << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	std::cout << YELLOW "Assignment operator RobotomyRequestForm called" NONE << std::endl;
	if (this == &rhs)
		return (*this);

	_target = rhs.getName();

	return (*this);
}

/*Destructor*/
/*===============================================================*/

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << YELLOW "Destructor RobotomyRequestForm called" NONE << std::endl;
}

/*Geters*/
/*===============================================================*/

const std::string& RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

/*Seters*/
/*===============================================================*/

/*===============================================================*/

const char* RobotomyRequestForm::FormNotSignet::what(void) const throw()
{
	std::cout << RED "Formulary no signed !!!" NONE << std::endl;

	return ("Error NoSigned");
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (getSign() == false)
	{
		throw FormNotSignet();
	}
	else if (executor.getGrade() > getGradeExec())
	{
		std::cout << RED "Grade of the Bureaucrat is too Low !!!" NONE << std::endl;
		throw GradeTooLowException();
	}
	else
	{
		std::cout << GREEN "*** Makes drill noises. ***" NONE << std::endl;
		std::cout << GREEN "*** " << _target << " has been robotomized successfully 50 % of the time :) ***" NONE << std::endl;
	}
}

std::ostream& operator<<(std::ostream& o, RobotomyRequestForm& rhs)
{
	o << WHITE "\n-- target : " << rhs.getTarget() << " --" NONE << std::endl;
	o << rhs.getName() << ", sign : ";
	if (rhs.getSign() == false)
		o << RED "No Signed" NONE;
	else
		o << GREEN "Signed" NONE;
	o << "\nGrade Sign : " << rhs.getGradeSign();
	o << "\nGrade Exec : " << rhs.getGradeExec();

	return (o);
}

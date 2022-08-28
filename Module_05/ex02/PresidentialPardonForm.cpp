/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:30:44 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/28 17:30:44 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

/*Public*/
/***************************************************************************************************************************/

								/*Constructor*/
/*===============================================================*/

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", SIGNATURE_PRESID, EXECUTION_PRESID), _target("PresidentialPardonForm_target")
{
	std::cout << YELLOW "Constructor PresidentialPardonForm by default called" NONE << std::endl;
	std::cout << GREEN "Constructor OK" NONE << std::endl;
	std::cout << *this << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", SIGNATURE_PRESID, EXECUTION_PRESID), _target(target)
{
	std::cout << YELLOW "Constructor PresidentialPardonForm by affectation called" NONE << std::endl;
	std::cout << *this << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src) : _target(src._target)
{
	std::cout << YELLOW "Constructor PresidentialPardonForm by copy called" NONE << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	std::cout << YELLOW "Assignment operator PresidentialPardonForm called" NONE << std::endl;
	if (this == &rhs)
		return (*this);

	_target = rhs.getName();

	return (*this);
}

/*Destructor*/
/*===============================================================*/

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << YELLOW "Destructor PresidentialPardonForm called" NONE << std::endl;
}

/*Geters*/
/*===============================================================*/

const std::string& PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

/*Seters*/
/*===============================================================*/


/*===============================================================*/

const char* PresidentialPardonForm::FormNotSignet::what(void) const throw()
{
	std::cout << RED "Formulary no signed !!!" NONE << std::endl;

	return ("Error NoSigned");
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
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
		std::cout << GREEN "*** " << _target << " was forgiven by Zaphod Beeblebrox. :) ***" NONE << std::endl;
	}
}

std::ostream& operator<<(std::ostream& o, PresidentialPardonForm& rhs)
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:32:18 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/28 17:32:18 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

/*Public*/
/***************************************************************************************************************************/

								/*Constructor*/
/*===============================================================*/

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", SIGNATURE, EXECUTION), _target("ShrubberyCreationForm_target")
{
	std::cout << YELLOW "Constructor ShrubberyCreationForm by default called" NONE << std::endl;
	std::cout << GREEN "Constructor OK" NONE << std::endl;
	std::cout << *this << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", SIGNATURE, EXECUTION), _target(target)
{
	std::cout << YELLOW "Constructor ShrubberyCreationForm by affectation called" NONE << std::endl;
    std::cout << *this << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src) : _target(src._target)
{
	std::cout << YELLOW "Constructor ShrubberyCreationForm by copy called" NONE << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	std::cout << YELLOW "Assignment operator ShrubberyCreationForm called" NONE << std::endl;
	if (this == &rhs)
		return (*this);

	_target = rhs.getName();

	return (*this);
}

/*Destructor*/
/*===============================================================*/

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << YELLOW "Destructor ShrubberyCreationForm called" NONE << std::endl;
}

/*Geters*/
/*===============================================================*/

const std::string& ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

/*Seters*/
/*===============================================================*/

/*===============================================================*/


const char* ShrubberyCreationForm::FormNotSignet::what(void) const throw()
{
    std::cout << RED "Formulary no signed !!!" NONE  << std::endl;

    return ("Error NoSigned");
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    std::string filename = _target + "_shrubbery";

    if (getSign() == false)
    {
        std::cout << RED "*** File \"" << filename << "\" is not created :) ***" NONE << std::endl;
        throw FormNotSignet();
    }
    else if (executor.getGrade() > getGradeExec())
    {
        std::cout << RED "Grade of the Bureaucrat is too Low !!!" NONE << std::endl;
        std::cout << RED "*** File \"" << filename << "\" is not created :) ***" NONE << std::endl;

        throw GradeTooLowException();
    }
    else
    {
        std::ofstream	ofs(filename, std::ios::out | std::ios::app);

        if (!ofs)
        {
            std::cout << "Error file out" << std::endl;
            exit(0);
        }

        ofs << "                                                                                          " << std::endl;
        ofs << "                                                .:...:.                          " << std::endl;
        ofs << "                                                :-      .-                         " << std::endl;
        ofs << "                                      .-:::::.=.        -...                      " << std::endl;
        ofs << "                                     -:                     ::                    " << std::endl;
        ofs << "                                   ..-   ..:.      :: ..     =:.                  " << std::endl;
        ofs << "                                ::        +..     .  :.        :-                " << std::endl;
        ofs << "                       .        .=        ::..+       -. .-       +               " << std::endl;
        ofs << "                      =.-    .-.             .-        .:..    .=::               " << std::endl;
        ofs << "                    :-  .-   -             . ::     .. : -      :-.               " << std::endl;
        ofs << "              ::.::      :-..             -.   :.   ..:..         ::             " << std::endl;
        ofs << "             .:+:        .:    -.  .  .:..  . -.-::               .=             " << std::endl;
        ofs << "               .::  .      =.   -......:     -:- .-:      ::      :=              " << std::endl;
        ofs << "         :.:::.  --.-.=  -                ...= .-      ..-=        =             " << std::endl;
        ofs << "        -:: :           ::            -....  =.:..:  -:.:-::-     :::.           " << std::endl;
        ofs << "          :.-=+  .. .    ::                        =:=.=   =         .-          " << std::endl;
        ofs << "          .:::.  .-::..: ::::                          -:    ..:       .:         " << std::endl;
        ofs << "       ---=          .:.-          ..:.                 =            -.::         " << std::endl;
        ofs << "         .-.:=      -.             .-:. -.::-:.-       .             +            " << std::endl;
        ofs << "         :::      -:          :  =.:     : . ::-=  :.           ..:=             " << std::endl;
        ofs << "    :::::  ..:.   .+        :::.:        -  ::.  ..                 ..           " << std::endl;
        ofs << "  :==-:    -..=:: :  -:.                .::.:-        :.       .     ::           " << std::endl;
        ofs << "    -:-=.    .. .:    -.                           .- .-    .=.  .:::            " << std::endl;
        ofs << "  .:::::              ::      .:                       -.-:...    ..             " << std::endl;
        ofs << " =-:-                    ::-:--  ...-   ::.+:-:                  -:::             " << std::endl;
        ofs << "  -=.--                    .-  .:::.--.:.     :=-=.      :       -::.:            " << std::endl;
        ofs << "            -=:           .:...-:.:        =:  =    .-.  =-:::::::::-:::.   =.           " << std::endl;
        ofs << "    -:....      .....::::-:                 =.-    -   -.                  . .:-        " << std::endl;
        ofs << "      .--       +:.::..   .=.:.   :::: . .   =-:    *::.-                       .=       " << std::endl;
        ofs << "       ... =::.--    .. :  :. ::   ..:.=.:     .:   +                             .::    " << std::endl;
        ofs << "      .::-::: :-=:.- .  -   :. .::             =..  =                              -:.   " << std::endl;
        ofs << "   -:.:   ::=-.    :.=: .. :..-. :-:-::.   :.. :::..-- -:.   ..:                  :+.    " << std::endl;
        ofs << "  -=-....*             ::.:-:.-.    .  -:-:=- :  :. -=:- .=::   ..=.               .-.   " << std::endl;
        ofs << "        ...:.- ::::  :::...: -:-.. . ...-::.:.::     -=  ..       =-               :-   " << std::endl;
        ofs << "             ..    ::       ..                  ..:..:.-..:=  ......-=:-::-::..-:--::   " << std::endl;
        ofs.close();

        std::cout << GREEN "*** File \"" << filename << "\" is created :) ***" NONE << std::endl;
    }
  }


/*===============================================================*/
/*===============================================================*/

std::ostream& operator<<(std::ostream& o, ShrubberyCreationForm& rhs)
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

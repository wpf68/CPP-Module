/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:06:59 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/31 14:06:59 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void	ft_present(void);

int	main(void)
{
	int	menu;

	ft_present();

	{
		Intern someRandomIntern;
		Form* rrf;

		try
		{
			std::cout << CYANE "\n\t** robotomy request **" NONE << std::endl;
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			delete rrf;
		}
		catch (std::exception e)
		{
			std::cout << RED << e.what() << NONE << std::endl;
		}

		try
		{
			std::cout << CYANE "\n\t** presidential pardon **" NONE << std::endl;
			rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
			delete rrf;
		}
		catch (std::exception& e)
		{
			std::cout << RED << e.what() << NONE << std::endl;
		}

		try
		{
			std::cout << CYANE "\n\t** shrubbery creation **" NONE << std::endl;
			rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
			delete rrf;
		}
		catch (std::exception& e)
		{
			std::cout << RED << e.what() << NONE << std::endl;
		}

		try
		{
			std::cout << CYANE "\n\t** other request **" NONE << std::endl;
			rrf = someRandomIntern.makeForm("other request", "Bender");
			delete rrf;
		}
		catch (std::exception &e)
		{
			std::cerr << RED << e.what() << NONE << std::endl;
		}
	}

	return (0);
}

/* ********************************************************************************************************* */
/* ********************************************************************************************************* */

void ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "    _____                _       _                       _" << std::endl;
	std::cout << "   / ____|              | |     | |                     (_)" << std::endl;
	std::cout << "  | |        ___   ___  | |_    | |_    ___    _   _     _    ___    _   _   _ __   ___" << std::endl;
	std::cout << "  | |       / _ \\ / __| | __|   | __|  / _ \\  | | | |   | |  / _ \\  | | | | | '__| / __|              " << std::endl;
	std::cout << "  | |____  | __ / \\__ \\ | |_    | |_  | (_) | | |_| |   | | | (_) | | |_| | | |    \\__ \\    _  _  _" << std::endl;
	std::cout << "   \\_____|  \\___| |___/ \\__ |    \\__|  \\___/   \\__,_|   | |  \\___/   \\__,_| |_|    |___/   (_)(_)(_)" << std::endl;
	std::cout << "                                                       _/ |" << std::endl;
	std::cout << "                                                      |__/" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}

/* ********************************************************************************************************* */
/* ********************************************************************************************************* */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:21:42 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/21 17:21:42 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "    _____              _     _            __                    _" << std::endl;
	std::cout << "   / ____|            | |   (_)          / _|                  | |" << std::endl;
	std::cout << "  | (___     ___    __| |    _   ___    | |_    ___    _ __    | |   ___    ___    ___   _ __   ___" << std::endl;
	std::cout << "   \\___ \\   / _ \\  / _` |   | | / __|   |  _|  / _ \\  | '__|   | |  / _ \\  / __|  / _ \\ | '__| / __|" << std::endl;
	std::cout << "   ____) | |  __/ | (_| |   | | \\__ \\   | |   | (_) | | |      | | | (_) | \\__ \\ |  __/ | |    \\__ \\" << std::endl;
	std::cout << "  |_____/   \\___|  \\__,_|   |_| |___/   |_|    \\___/  |_|      |_|  \\___/  |___/  \\___| |_|    |___/" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}

/*three parameters in the following order: 
a filename and
two strings, s1 and s2*/

int	main(int argc, char **argv)
{
	std::string	filename = "";
	std::string	s1 = "";
	std::string	s2 = "";
	std::string	source = "";
	std::string	destination = "";

	std::cout << CLEAR << std::endl;

	ft_present();

	if (argc != 4)
	{
		std::cout << YELLOW "\nplease entred three parameters in the following order : a filename and two strings";
		std::cout << CYANE " or : make test\n" NONE << std::endl;
		return (0);
	}

	filename= argv[1];
	s1 = argv[2];
	s2 = argv[3];

	ft_create_source_to_filename(source, filename);
	ft_create_destination(source, destination, s1, s2);
	ft_create_filename_replace(filename, destination);

	return (0); 
}
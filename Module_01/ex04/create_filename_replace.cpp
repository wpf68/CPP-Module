/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_filename_replace.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:19:43 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/21 17:19:43 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	ft_create_filename_replace(std::string const filename, std::string const destination)
{
	std::string	filename_replace = filename;
	char		c;

	filename_replace += ".replace";
	std::ofstream	ofs(filename_replace, std::ios::out | std::ios::trunc);
	if (!ofs)
	{
		std::cout << "Error file out" << std::endl;
		exit(0);
	}
	ofs << destination;
	ofs.close();

	std::cout << CYANE "=========== file : " GREEN << filename << ".replace";
	std::cout << CYANE " ====================\n" NONE << std::endl;

	std::ifstream	ifs(filename_replace, std::ios::in);

	if (!ifs)
	{
		std::cout << "Error file in" << std::endl;
		exit(0);
	}

	while (ifs.get(c))
		std::cout << c;
	ifs.close();
}
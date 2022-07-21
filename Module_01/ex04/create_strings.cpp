/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_strings.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:20:55 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/21 17:20:55 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	ft_create_source_to_filename(std::string& source, std::string const filename)
{
	char	c;

	std::ifstream	ifs(filename, std::ios::in);

	if (!ifs)
	{
		std::cout << "Error file in" << std::endl;
		exit(0);
	}

	while (ifs.get(c))
		source += c;

	ifs.close();
	std::cout << std::endl;
	std::cout << YELLOW "=========== file : " GREEN << filename << YELLOW " ====================\n" NONE << std::endl;
	std::cout << source << std::endl;
}

void	ft_create_destination(std::string const source, std::string& destination, std::string const s1, std::string const s2)
{
	std::size_t	i = 0;
	std::size_t	position = 0;
	std::string	temp = "";
	std::size_t	len = 0;
	std::size_t	nb_match = 0;

	std::cout << YELLOW "==========================================================" << std::endl;
	std::cout << GREEN "Position of  Match : " CYANE << std::endl;
	i = 0;
	while (true)
	{
		position = source.find(s1, position);

		if (position == std::string::npos)
		{
			len = source.size();
			temp.assign(source, i, len - i);
			destination += temp;
			break;
		}
		nb_match++;
		std::cout << position << " - ";
		len = position;

		temp.assign(source, i, len - i);

		i = position + s1.size();

		destination += temp;
		destination += s2;
		position += 1;
	}

	std::cout << GREEN "\nNumber of the Match : " CYANE << nb_match << std::endl;
	std::cout << YELLOW "==========================================================\n" NONE << std::endl;
}

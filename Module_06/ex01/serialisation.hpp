/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialisation.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:38:43 by pwolff            #+#    #+#             */
/*   Updated: 2022/09/04 12:38:43 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALISATION_HPP
# define SERIALISATION_HPP

#include <iostream>
#include <string>
//#include <cstdint>

# ifndef COLOR
#  define COLOR
#  define CLEAR		"\x1B[2J\x1B[H"
#  define NONE		"\033[0;37m"
#  define WHITE		"\033[1;37m"
#  define RED		"\033[1;31m"
#  define GREEN		"\033[1;32m"
#  define CYANE		"\033[1;36m"
#  define ORANGE	"\033[1,38m"
#  define YELLOW	"\033[1;33m"
#  define BLUE		"\033[1,34m"
#  define GREY		"\033[1,37m"
#  define ROSE		"\033[35m"
#  define UNDER		"\033[4m"
#  define END		"\033[0m"

# endif

typedef struct s_data
{
	int			i;
	std::string	data;

} Data;

typedef struct s_data2
{
	int			i;
	std::string	data;

	s_data2(int i, std::string data);

} Data2;

uintptr_t	serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

void ft_present(void);

#endif
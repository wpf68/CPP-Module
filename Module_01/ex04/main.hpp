/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:22:19 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/21 17:22:19 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <iostream>
# include <fstream>
# include <string>

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
# endif

void	ft_create_source_to_filename(std::string& source, std::string const filename);
void	ft_create_destination(std::string const source, std::string& destination, std::string const s1, std::string const s2);
void	ft_create_filename_replace(std::string const filename, std::string const destination);
void	ft_present(void);

#endif

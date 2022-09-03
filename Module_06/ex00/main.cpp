/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:51:49 by pwolff            #+#    #+#             */
/*   Updated: 2022/09/03 16:51:49 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int	main(int argc, char** argv)
{
	/*
	std::cout
		<< "type\t│ lowest()\t│ min()\t\t│ max()\n"
		<< "bool\t│ "
		<< std::numeric_limits<bool>::lowest() << "\t\t│ "
		<< std::numeric_limits<bool>::min() << "\t\t│ "
		<< std::numeric_limits<bool>::max() << '\n'
		<< "uchar\t│ "
		<< +std::numeric_limits<unsigned char>::lowest() << "\t\t│ "
		<< +std::numeric_limits<unsigned char>::min() << "\t\t│ "
		<< +std::numeric_limits<unsigned char>::max() << '\n'
		<< "int\t│ "
		<< std::numeric_limits<int>::lowest() << "\t│ "
		<< std::numeric_limits<int>::min() << "\t│ "
		<< std::numeric_limits<int>::max() << '\n'
		<< "float\t│ "
		<< std::numeric_limits<float>::lowest() << "\t│ "
		<< std::numeric_limits<float>::min() << "\t│ "
		<< std::numeric_limits<float>::max() << '\n'
		<< "double\t│ "
		<< std::numeric_limits<double>::lowest() << "\t│ "
		<< std::numeric_limits<double>::min() << "\t│ "
		<< std::numeric_limits<double>::max() << '\n';
	std::cout << "char min : " << +std::numeric_limits<char>::min() << " char max : " << +std::numeric_limits<char>::max() << std::endl;*/

	if (argc == 1)
	{
		std::cout << RED "Please enter at least one argument :)" NONE << std::endl;
		return (0);
	}
	
	ft_convert(argv[1]);
	return (0);
}
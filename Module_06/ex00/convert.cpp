/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:13:34 by pwolff            #+#    #+#             */
/*   Updated: 2022/09/06 10:13:34 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	ft_convert(char* argv)
{
	std::string	s_string;
	double		d_double;

	int			n_decimal;
	int			whole_part;
	int			i;

	d_double = std::strtod(argv, NULL);
	s_string = std::to_string(d_double);

	if (d_double == 0 && argv[0] != '0' && argv[1] != '\0')
	{
		std::cout << RED "Error :: Unknow Input" NONE << std::endl;
	}
	else
	{
		if (d_double == 0 && argv[1] == '\0')
			d_double = static_cast<double>(argv[0]);
		// -----  calcul n_decimal   -------------------------
		i = 0;
		while (argv[i] != '.' && argv[i])
			i++;
		if (argv[i] == '.')
		{
			n_decimal = i;
			i++;
			while (argv[i] >= '0' && argv[i] <= '9')
				i++;
			n_decimal = i - n_decimal - 1;
			if (n_decimal > 4)
				n_decimal = 4;
		}
		else
			n_decimal = 1;

		// -----  calcul whole_part   -------------------------
		whole_part = 0;
		while (s_string[whole_part] != '.' && s_string[whole_part])
			whole_part++;
		if (s_string[0] == '-')
			whole_part--;
		if (whole_part < 7)
			std::cout << std::fixed << std::setprecision(n_decimal);


		ft_char(d_double, s_string);
		ft_int(d_double, s_string);
		ft_float(d_double, s_string);
		ft_double(d_double);
	}
}

void	ft_char(double const & d_double, std::string const & s_string)
{
	char		c_char;

	if (d_double < +std::numeric_limits<char>::min() || d_double > +std::numeric_limits<char>::max())
		std::cout << ROSE "char: overflow" NONE << std::endl;
	else if (d_double >= 32 && d_double <= 126)
	{
		c_char = static_cast<char>(d_double);
		std::cout << YELLOW "char: '" << c_char << "'" NONE << std::endl;
	}
	else if (!s_string.find("nan") || !s_string.find("inf") ||
		!s_string.find("-inf") || !s_string.find("+inf") ||
		!s_string.find("+nan") || !s_string.find("-nan"))
	{
		std::cout << RED "char: impossible" NONE << std::endl;
	}
	else
		std::cout << WHITE "char: Non displayable" NONE << std::endl;
}

void	ft_int(double const& d_double, std::string const& s_string)
{
	int			i_int;

	if (!s_string.find("nan") || !s_string.find("inf") ||
		!s_string.find("-inf") || !s_string.find("+inf") ||
		!s_string.find("+nan") || !s_string.find("-nan"))
	{
		std::cout << RED "int: impossible" NONE << std::endl;
	}
	else if (d_double < std::numeric_limits<int>::min() || d_double > std::numeric_limits<int>::max())
		std::cout << ROSE "int: overflow" NONE << std::endl;
	else
	{
		i_int = static_cast<int>(d_double);
		std::cout << YELLOW "int: " << i_int << NONE << std::endl;
	}
}

void	ft_float(double const& d_double, std::string const& s_string)
{
	float		f_float;

	if (!s_string.find("inf") || !s_string.find("+inf"))
		std::cout << YELLOW "float: inff" NONE << std::endl;
	else if (!s_string.find("-inf"))
		std::cout << YELLOW "float: -inff" NONE << std::endl;
	else if (d_double < std::numeric_limits<float>::lowest() || d_double > std::numeric_limits<float>::max())
		std::cout << ROSE "float: overflow" NONE << std::endl;
	else
	{
		f_float = static_cast<float>(d_double);
		std::cout << YELLOW "float: " << f_float << "f" NONE << std::endl;
	}
}

void	ft_double(double const& d_double)
{
	std::cout << YELLOW "double: " << static_cast<double>(d_double) << NONE << std::endl;
}
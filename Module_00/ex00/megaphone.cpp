/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:54:14 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/20 10:12:10 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cctype>

int	main(int nb_arg, char **arg)
{
	int	i;
	int	j;

	if (nb_arg <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else 
	{
		i = 0;
		while (++i < nb_arg)
		{
			j = -1;
			while (arg[i][++j])
				std::cout << (char)(toupper(arg[i][j]));
		}
		std::cout << std::endl;
	}
	return (0);
}

/*
void	ft_toupper(char	*arg)
{
	int	i;

	i = -1;
	while (arg[++i])
		if (arg[i] >= 'a' && arg[i] <= 'z')
			arg[i] = arg[i] - 'a' + 'A';
}
*/

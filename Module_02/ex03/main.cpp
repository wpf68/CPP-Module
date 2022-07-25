/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:07:31 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/25 13:07:31 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

float ft_converse_two_decimal(float y)
{
	int		y_int = 0;

	y_int = (int)(y * 100);
	y = (float)y_int;
	y /= 100;

	return (y);
}

float ft_converse_two_decimal(Fixed y_f)
{
	int		y_int = 0;
	float	y = y_f.toFloat();

	y_int = (int)(y * 100);
	y = (float)y_int;
	y /= 100;

	return (y);
}

void	ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "  ____     _____   _____" << std::endl;
	std::cout << " |  _ \\   / ____| |  __ \\" << std::endl;
	std::cout << " | |_) | | (___   | |__) |" << std::endl;
	std::cout << " |  _ <   \\___ \\  |  ___/" << std::endl;
	std::cout << " | |_) |  ____) | | |" << std::endl;
	std::cout << " |____/  |_____/  |_|" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}

int main(void) {
	ft_present();

	Point	A(-10, 0.0);
	Point	B(10.25, 0.0);
	Point	C(20.25, 30.1);
	
	bool	test = false;
	int		x;
	int		y;

	std::cout << CYANE "A     : " << A << "B     : " << B << "C     : " << C << NONE << std::endl;
	std::cout << GREEN "\nValue of Point x : " << YELLOW;
	std::cin >> x;
	std::cout << GREEN "Value of Point y : " << YELLOW;
	std::cin >> y;

	Point	Eval(x, y);

	std::cout << CLEAR << CYANE "A     : " << A << "B     : " << B << "C     : " << C << "Point : " << Eval << NONE << std::endl;

	test = bsp(A, B, C, Eval);

	if (test)
		std::cout << GREEN "\nTrue" NONE << std::endl;
	else
		std::cout << RED "\nFalse" NONE << std::endl;

	return 0;
}


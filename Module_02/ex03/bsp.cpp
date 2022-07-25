/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:05:20 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/25 13:05:20 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include <string>
#include "Fixed.hpp"
#include "Point.hpp"

/*      s = ([AB] + [BC] + [AC]) / 2    :::      perimetre / 2        */
/*      Aire = sqr ( s (s - [AB]) (s - [BC]) (s - [CA]))              */
/*      longuer [AB] = sqr ( (xB - xA)^2 + (yB - yA)^2)               */

bool	ft_test_fonctions(Point const Eval, float const a, float const b, bool const perpendiculaire);
bool	ft_test_fonctions(Point const Eval, Fixed const a, Fixed const b, bool const perpendiculaire);
float	ft_converse_two_decimal(float y);
float	ft_converse_two_decimal(Fixed y_f);



bool ft_test_fonctions(Point const Eval, Fixed const a, Fixed const b, bool const perpendiculaire)
{
	Fixed	Y;
	Fixed	X;

	if (perpendiculaire)
	{
		Y = Eval.get_y().toFloat();
		X = a.toFloat();

		std::cout << "- fonction (x) :: x = " << X << " y = y = " << Y << std::endl;
	}
	else
	{
		X = Eval.get_x().toFloat();
		Y = a.toFloat() * X.toFloat() + b.toFloat();
		std::cout << "- fonction (x) :: x = " << X << " y = " << Y << std::endl;
	}

	if (Eval.get_y().toFloat() == Y.toFloat())
	{
		std::cout << RED "Error test: Point is on the side of the triangle" NONE << std::endl;
		return (false);

	}

	std::cout << GREEN "Test OK: Point is not on the side of the triangle" NONE << std::endl;
	return (true);
}


bool ft_test_fonctions(Point const Eval, float const a, float const b, bool const perpendiculaire)
{
	Fixed	Y;
	Fixed	X;

	if (perpendiculaire)
	{
		Y = Eval.get_y().toFloat();
		X = a;

		std::cout << "- fonction (x) :: x = " << X << " y = y = " << Y << std::endl;
	}
	else
	{
		X = Eval.get_x().toFloat();
		Y = a * X.toFloat() + b;
		std::cout << "- fonction (x) :: x = " << X << " y = " << Y << std::endl;
	}

	if (Eval.get_y().toFloat() == Y.toFloat())
	{
		std::cout << RED "Error test: Point is on the side of the triangle" NONE << std::endl;
		return (false);

	}
		
	std::cout << GREEN "Test OK: Point is not on the side of the triangle" NONE <<  std::endl;
	return (true);
}

static	Fixed	ft_surface(Point const a, Point const b, Point const c)
{
	float	p(0.0f);
	float	ab(0.0f);
	float	ac(0.0f);
	float	bc(0.0f);
	float	s(0.0f);

	ab = sqrt(pow((a.get_x().toFloat() - b.get_x().toFloat()), 2) + pow((a.get_y().toFloat() - b.get_y().toFloat()), 2));
	ac = sqrt(pow((a.get_x().toFloat() - c.get_x().toFloat()), 2) + pow((a.get_y().toFloat() - c.get_y().toFloat()), 2));
	bc = sqrt(pow((b.get_x().toFloat() - c.get_x().toFloat()), 2) + pow((b.get_y().toFloat() - c.get_y().toFloat()), 2));
	std::cout << "\n[Segment 1] = " << ab << std::endl;
	std::cout << "[Segment 2] = " << ac << std::endl;
	std::cout << "[Segment 3] = " << bc << std::endl;

	p = (ab + ac + bc) / 2;
	std::cout << "perimetre / 2 = " << p << std::endl;

	s = sqrt(p * (p - ab) * (p - ac) * (p - bc));
	std::cout << "surface = " << s << std::endl;

	return (s);
 }

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool	result = false;

	/*        Variables  fonctions     */
	float	a_AB = 0;
	float	b_AB = 0;
	bool	perpendiculaire_AB = false;
	bool	paralle_AB = false;
	Fixed	a_AC = 0;
	Fixed	b_AC = 0;
	bool	perpendiculaire_AC = false;
	bool	paralle_AC = false;
	Fixed	a_BC = 0;
	Fixed	b_BC = 0;
	bool	perpendiculaire_BC = false;
	bool	paralle_BC = false;

	/*         Variables aera           */
	Fixed	s_ABC(0.0f);
	Fixed	s_ADB(0.0f);
	Fixed	s_ADC(0.0f);
	Fixed	s_CDB(0.0f);
	float	temp;

	/* ================================================================================================ */
	/* ===========                  Calculation of fonctions               ============================ */
	/* ================================================================================================ */

	std::cout << GREEN "\t\t***** Calculation of fonctions f(x) : *****" << std::endl;
	if (b.get_x().toFloat() != a.get_x().toFloat())
	{
		a_AB = ((b.get_y().toFloat() - a.get_y().toFloat()) / (b.get_x().toFloat() - a.get_x().toFloat()));
		if (a_AB == 0)
		{
			std::cout << "(A,B) parallel to abscissa " << std::endl;
			paralle_AB = true;
		}
		b_AB = a.get_y().toFloat() - (a_AB * a.get_x().toFloat());
		std::cout << "(A,B) : y =  " << a_AB << " * x + " << b_AB << std::endl;
	}
	else
	{
		perpendiculaire_AB = true;
		a_AB = b.get_x().toFloat();
		b_AB = 0;
		std::cout << "(A,B) perpendicular to the abscissa : x =  " << a_AB << std::endl;
	}

	if (c.get_x().toFloat() != a.get_x().toFloat())
	{
		a_AC = ((c.get_y().toFloat() - a.get_y().toFloat()) / (c.get_x().toFloat() - a.get_x().toFloat()));
		if (a_AC.toFloat() == 0)
		{
			std::cout << "(A,C) parallel to abscissa " << std::endl;
			paralle_AC = true;
		}
		b_AC = a.get_y().toFloat() - a_AC.toFloat() * a.get_x().toFloat();
		std::cout << "(A,C) : y =  " << a_AC << " * x + " << b_AC << std::endl;
	}
	else
	{
		perpendiculaire_AC = true;
		a_AC = a.get_x().toFloat();
		b_AC = 0;
		std::cout << "(A,C) perpendicular to the abscissa: x =  " << a_AC << std::endl;
	}

	if (c.get_x().toFloat() != b.get_x().toFloat())
	{
		a_BC = ((c.get_y().toFloat() - b.get_y().toFloat()) / (c.get_x().toFloat() - b.get_x().toFloat()));
		if (a_BC.toFloat() == 0)
		{
			std::cout << "(B,C) parallel to abscissa " << std::endl;
			paralle_BC = true;
		}
		b_BC = b.get_y().toFloat() - (a_BC.toFloat() * b.get_x().toFloat());
		std::cout << "(B,C) : y =  " << a_BC << " * x + " << b_BC << std::endl;
	}
	else
	{
		perpendiculaire_BC = true;
		a_BC = b.get_x().toFloat();
		b_BC = 0;
		std::cout << "(B,C) perpendicular to the abscissa : x =  " << a_BC << std::endl;
	}
	std::cout << NONE;

	/* ================================================================================================ */
	/* ====================                TEST AREA                     ============================== */
	/* ================================================================================================ */

	std::cout << WHITE "\n\t\t*****   Area calculation - HERON FORMULA :  *****";
	
	s_ABC = ft_surface(a, b, c);
	//s_ABC = ft_converse_two_decimal(s_ABC);
	s_ADB = ft_surface(a, point, b);
	s_ADC = ft_surface(a, point, c);
	s_CDB = ft_surface(c, point, b);

	std::cout << YELLOW "\nSurafce Total (ABC) = " << s_ABC << " pixels" << std::endl;

	std::cout << "Surafce 1     (ADB) = " << (s_ADB) << " pixels" << std::endl;
	std::cout << "Surafce 2     (ADC) = " << s_ADC << " pixels" << std::endl;
	std::cout << "Surafce 3     (CDB) = " << s_CDB << " pixels" << std::endl;
	//std::cout << "Surafce 1+2+3 (CDB) = " << s_ADB + s_ADC + s_CDB << " pixels" NONE << std::endl;

	temp = (s_ABC.toFloat() - (s_ADB.toFloat() + s_ADC.toFloat() + s_CDB.toFloat()));
	//std::cout << GREEN << temp << NONE << std::endl;
	result = (temp < 0.04 && temp > -0.04);
	
	if (result)
		std::cout << GREEN "\n** OK surfaces **" NONE << std::endl;
	else
		std::cout << RED "\n** ERROR areas **" NONE << std::endl;

	/* ================================================================================================ */
	/* =======================            TEST   VERTEX          ====================================== */
	/* ================================================================================================ */

	if (result)
	{
		if (point.get_x().toFloat() == a.get_x().toFloat() && point.get_y().toFloat() == a.get_y().toFloat())
			result = false;
		else if (point.get_x().toFloat() == b.get_x().toFloat() && point.get_y().toFloat() == b.get_y().toFloat())
			result = false;
		else if (point.get_x().toFloat() == c.get_x().toFloat() && point.get_y().toFloat() == c.get_y().toFloat())
			result = false;

		if (result)
			std::cout << GREEN "\n** The point is not at a vertex of the triangle ** \n" NONE << std::endl;
		else
			std::cout << RED "\n** The point is at a vertex of the triangle **" NONE << std::endl;
	}
	
	/* ================================================================================================ */
	/* =====================  TEST side of the triangle         ======================================= */
	/* ================================================================================================ */

	if (result)
	{
		std::cout << "Test (AB) f(x) :" << std::endl;
		result = ft_test_fonctions(point, a_AB, b_AB, perpendiculaire_AB);
		if (result)
		{
			std::cout << "Test (AC) f(x) :" << std::endl;
			result = ft_test_fonctions(point, a_AC, b_AC, perpendiculaire_AC);
			if (result)
			{
				std::cout << "Test (BC) f(x) :" << std::endl;
				result = ft_test_fonctions(point, a_BC, b_BC, perpendiculaire_BC);
			}
		}
	}

	return (result);
}

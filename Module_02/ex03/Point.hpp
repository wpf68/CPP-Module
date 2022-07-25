/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:10:15 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/25 13:10:15 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <cmath>
# include <string>
# include "Fixed.hpp"

class Point
{
public:
	Point(void);
	Point(float const x, float const y);
	Point(const Point& copy);

	~Point(void);

	Point&	operator=(const Point &rhs);


	const Fixed& get_x(void) const;
	const Fixed& get_y(void) const;

private:
	Fixed const			_x;
	Fixed const			_y;
	int const static 	_bits = 8;

};

std::ostream& operator<<(std::ostream& o, Point const point);

#endif
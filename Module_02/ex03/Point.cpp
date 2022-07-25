/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:09:17 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/25 13:09:17 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* *** Constructors *** */

Point::Point() : _x(0), _y(0)
{
}

Point::Point(float const x_float, float const y_float) : _x(x_float), _y(y_float)
{
}

Point::Point(const Point& copy) : _x(copy.get_x()), _y(copy.get_y())
{
}

/* *** Destructor *** */

Point::~Point()
{
}

Point& Point::operator=(const Point &rhs)
{
	//std::cout << "Copy assignment operator called" << std::endl;

	//Point	temp = rhs;

	//return (temp);
	return (* this);
}


/* *** Getter *** */

const Fixed& Point::get_x(void) const
{
	//std::cout << "get_x member function called" << std::endl;
	return (this->_x);
}

const Fixed& Point::get_y(void) const
{
	//std::cout << "get_y member function called" << std::endl;
	return (this->_y);
}

std::ostream& operator<<(std::ostream& o, Point const point)
{
	o << "(" << point.get_x() << ", " << point.get_y() << ")" << std::endl;
	return (o);
}
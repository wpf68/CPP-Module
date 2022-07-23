/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:50:02 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/23 14:50:02 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

													/*Public*/
/***************************************************************************************************************************/

								/*Constructor*/
/*===============================================================*/
Fixed::Fixed(void) : _val(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::Fixed(int const nb_int)
{
	std::cout << "Int constructor called" << std::endl;
	this->_val = (nb_int << this->_bits);

	return;
}

Fixed::Fixed(float const nb_float)
{
	std::cout << "Float constructor called" << std::endl;
	this->_val = roundf(nb_float * (1 << this->_bits));
	
	return;
}

								/*Destructor*/
/*===============================================================*/
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}


/*===============================================================*/
Fixed& Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_val = rhs.getRawBits();

	return *this;
}





								/*Seters*/
/*===============================================================*/
void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_val = raw;
}

float	Fixed::toFloat(void) const
{
	float	val_float;

	val_float = (float)this->_val / (1 << this->_bits);

	return (val_float);
}

int		Fixed::toInt(void) const
{
	int	val_int;

	val_int = ((this->_val >> this->_bits));

	return (val_int);
}

								/*Geters*/
/*===============================================================*/
int		Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (this->_val);
}


																/*Fonctions*/
/***************************************************************************************************************************/

std::ostream& operator<<(std::ostream& o, Fixed const& rhs)
{
	o << rhs.toFloat();
	return(o);
}
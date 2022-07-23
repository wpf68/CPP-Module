/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:57:21 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/23 18:57:21 by pwolff           ###   ########.fr       */
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


/*======================    operator arithmetique   ===================*/
/*=====================================================================*/

Fixed Fixed::operator+(Fixed const& rhs) const
{
	return (this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const& rhs) const
{
	return (this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const& rhs) const
{
	return (this->toFloat() * rhs.toFloat());
}
Fixed Fixed::operator/(Fixed const& rhs) const
{
	return (this->toFloat() / rhs.toFloat());
}

/*======================    operator comparaison    ===================*/
/*=====================================================================*/

Fixed Fixed::operator>(Fixed const& rhs) const
{
	return (this->toFloat() > rhs.toFloat());
}

Fixed Fixed::operator<(Fixed const& rhs) const
{
	return (this->toFloat() < rhs.toFloat());
}

Fixed Fixed::operator>=(Fixed const& rhs) const
{
	return (this->toFloat() >= rhs.toFloat());
}

Fixed Fixed::operator<=(Fixed const& rhs) const
{
	return (this->toFloat() <= rhs.toFloat());
}

Fixed Fixed::operator==(Fixed const& rhs) const
{
	return (this->toFloat() == rhs.toFloat());
}

Fixed Fixed::operator!=(Fixed const& rhs) const
{
	return (this->toFloat() != rhs.toFloat());
}

/*======================    operator    pre ++ --   ===================*/
/*=====================================================================*/

Fixed Fixed::operator++(void)
{
	this->_val++;

	return (*this);
}

Fixed Fixed::operator--(void)
{
	this->_val--;

	return (*this);
}

/*   + 1    - 1  (unitee)
Fixed Fixed::operator++(void)
{
	float	a;

	a = this->toFloat();
	a++;

	Fixed	rhs(a);

	this->_val = rhs.getRawBits();

	return (*this);
}

Fixed Fixed::operator--(void)
{
	float	a;

	a = this->toFloat();
	a--;

	Fixed	rhs(a);

	this->_val = rhs.getRawBits();

	return (*this);
}
*/

/*======================   operator   post ++ --    ===================*/
/*=====================================================================*/

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);

	operator++();

	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);

	operator--();

	return (tmp);
}


/*======================    fonctions min - max     ===================*/
/*=====================================================================*/

Fixed const& Fixed::max(Fixed const& a, Fixed const& b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return (a.toFloat() > b.toFloat() ? a : b);
}

Fixed const& Fixed::min(Fixed const& a, Fixed const& b)
{
	return (a.toFloat() < b.toFloat() ? a : b);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return (a.toFloat() < b.toFloat() ? a : b);
}

/*
Fixed& Fixed::max(Fixed& a, Fixed& b)
{


	return (a > b ? a : b);
}

Fixed const & Fixed::max(Fixed& const a, Fixed& const b)
{


	return (a > b ? a : b);
}
*/



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
	return (o);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 07:49:15 by pwolff            #+#    #+#             */
/*   Updated: 2022/09/09 07:49:15 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*Public*/
/***************************************************************************************************************************/

								/*Constructor*/
/*===============================================================*/
Span::Span() : _size(0)
{
	//std::cout << YELLOW "Construction without parameters called" NONE << std::endl;
}

Span::Span(unsigned int size) : _size(size)
{
	//std::cout << YELLOW "Construction with parameters called" NONE << std::endl;
	
}

Span::Span(Span const & span) : _size(span._size)
{
	//std::cout << YELLOW "Constructor Span by copy called" NONE << std::endl;
	for (int n : span._vector)
		_vector.push_back(n);
}

/*Destructor*/
/*===============================================================*/
Span::~Span()
{
	//std::cout << YELLOW "Destructor Span called" NONE << std::endl;
}

Span& Span::operator=(Span const & span)
{
	//std::cout << YELLOW "Assignment operator Span called" NONE << std::endl;
	if (this == &span)
		return (*this);

	if (!this->_vector.empty())
		this->_vector.erase(this->_vector.begin(), this->_vector.end());
	for (int n : span._vector)
		_vector.push_back(n);

	return (*this);
}

/*Geters*/
/*===============================================================*/
int		Span::longestSpan(void)
{
	if (_vector.size() > 1)
	{
		Span temp(*this);
		temp.sort();
		std::cout << CYANE "\n(( Span temporary sort  = ";
		temp.display();
		std::cout << "))" NONE << std::endl;

		return (temp._vector.back() - temp._vector.front());
	}
	else
	{
		std::cout << RED "Insufficient number of values in container !!!" NONE << std::endl;
		throw std::exception();
	}
}

int		Span::shortestSpan(void) 
{

	if (_vector.size() > 1)
	{
		Span	temp(*this);
		
		int		shortSpan;
		int		first;

		temp.sort();
		/*std::cout << CYANE "\n(( Span temporary sort  = ";
		temp.display();
		std::cout << "))" NONE << std::endl;*/

		shortSpan = (temp._vector.back() - temp._vector.front());

		first = temp._vector.front();
		for (int i = 1; i < temp._vector.size(); i++)
		{
			if (shortSpan > temp._vector[i] - first)
				shortSpan = temp._vector[i] - first;
			first = temp._vector[i];
		}
		return (shortSpan);
	}
	else
	{
		std::cout << RED "Insufficient number of values in container !!!" NONE << std::endl;
		throw std::exception();
	}
}

void	Span::display(void)
{
	for (int n : _vector) 
		std::cout << n << ", ";
}

/*Seters*/
/*===============================================================*/
void	Span::addNumber(int nb)
{
	if (_vector.size() == _size)
	{
		std::cout << RED "maximum number of arguments reached !!!" NONE << std::endl;
		throw std::exception();
	}
	else 
		_vector.push_back(nb);
}

void	Span::rangeOfIterators(unsigned int begin, unsigned int end)
{
	if (begin > _size || end + 1 > _size)
	{
		std::cout << RED "Error rangeOfIterator" NONE << std::endl;
		return ;
	}
	for (int i = _vector.size(); i < end + 1; i++)
		addNumber(0);
	std::generate(_vector.begin() + begin, _vector.begin() + end + 1, Generer);
}

void	Span::rangeOfIterators(unsigned int begin, unsigned int end, int val)
{
	if (begin > _size || end >= _size)
	{
		std::cout << RED "Error rangeOfIterator" NONE << std::endl;
		return;
	}
	for (int i = _vector.size(); i < end + 1; i++)
		addNumber(0);
	for (int i = begin; i <= end; i++)
		_vector[i] = val;
}

void	Span::sort(void)
{
	std::sort(_vector.begin(), _vector.end());
}

/*===============================================================*/
int		Generer(void)
{
	return (((rand() % 100) - 50));

}

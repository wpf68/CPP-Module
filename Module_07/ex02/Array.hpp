/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 08:19:05 by pwolff            #+#    #+#             */
/*   Updated: 2022/09/07 08:19:05 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>
# include <cstdlib>

# ifndef COLOR
#  define COLOR
#  define CLEAR		"\x1B[2J\x1B[H"
#  define NONE		"\033[0;37m"
#  define WHITE		"\033[1;37m"
#  define RED		"\033[1;31m"
#  define GREEN		"\033[1;32m"
#  define CYANE		"\033[1;36m"
#  define ORANGE	"\033[1,38m"
#  define YELLOW	"\033[1;33m"
#  define BLUE		"\033[1,34m"
#  define GREY		"\033[1,37m"
#  define ROSE		"\033[35m"
#  define UNDER		"\033[4m"
#  define END		"\033[0m"

# endif

template <typename T>
class Array
{
public:
	Array(void) : _size(0), _tab(new T[0])
	{
		std::cout << YELLOW "Construction without parameters called" NONE << std::endl;
		_tab = nullptr;
		std::cout << "tab = " << _tab << std::endl;
	}

	Array(unsigned int n) : _size(n), _tab(new T[n])
	{
		std::cout << YELLOW "Construction with parameters called" NONE << std::endl;
		for (int i = 0; i < n; i++)
			_tab[i] = i;
		ft_display();
	}

	Array(Array<T> const& src) : _tab(new T[src._size]), _size(src._size)
	{
		std::cout << YELLOW "Construction by copying called" NONE << std::endl;
		for (int i = 0; i < src._size; i++)
			_tab[i] = src._tab[i];
	}

	Array& operator=(Array const & rhs)
	{
		std::cout << ROSE "overloading the assignment operator" NONE << std::endl;
		if (this == &rhs)
			return(*this);
		delete[] _tab;
		_size = rhs._size;
		_tab = new T[_size];
		for (int i = 0; i < _size; i++)
			_tab[i] = rhs._tab[i];

		return (*this);
	}

	T& operator[](std::size_t const& n)
	{
		if (n < 0 || n >= _size)
			throw std::exception();
		return (_tab[n]);
	}

	~Array(void)
	{
		std::cout << YELLOW "Destructor Array called" NONE << std::endl;
		delete[] _tab;
	}

	std::size_t	size(void)
	{
		return (_size);
	}

	void	ft_display(void)
	{
		for (int i = 0; i < _size; i++)
			std::cout << "tab [" << i << "] = " << _tab[i] << std::endl;

	}

private:
	T*			_tab;
	std::size_t	_size;

};

#endif

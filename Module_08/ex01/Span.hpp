/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 15:11:12 by pwolff            #+#    #+#             */
/*   Updated: 2022/09/10 15:11:12 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <exception>
# include <algorithm>

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

class Span
{
public:
	Span(void);
	Span(unsigned int size);
	Span(Span const & span);
	~Span(void);

	Span& operator=(Span const & span);

	void	addNumber(int nb);
	int		shortestSpan(void);
	int		longestSpan(void);
	void	rangeOfIterators(unsigned int begin, unsigned int end);								// Random range
	void	rangeOfIterators(unsigned int begin, unsigned int end, int val);					// Defined range
	void	rangeOfIterators(std::vector<int>::iterator begin, std::vector<int>::iterator end);	// Iterator range

	void	display(void);
	void	sort(void);

private:
	unsigned int		_size;
	std::vector<int>	_vector;
};

int		Generer(void);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:59:02 by pwolff            #+#    #+#             */
/*   Updated: 2022/07/23 18:59:02 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

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
#  define ROSE		"\033[1,35m"
# endif

class Fixed
{
	public:

		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const nb_int);
		Fixed(float const nb_float);
		~Fixed(void);

		Fixed&	operator=(Fixed const& rhs);

		Fixed	operator+(Fixed const& rhs) const;
		Fixed	operator-(Fixed const& rhs) const;
		Fixed	operator*(Fixed const& rhs) const;
		Fixed	operator/(Fixed const& rhs) const;

		Fixed	operator>(Fixed const& rhs) const;
		Fixed	operator<(Fixed const& rhs) const;
		Fixed	operator>=(Fixed const& rhs) const;
		Fixed	operator<=(Fixed const& rhs) const;
		Fixed	operator==(Fixed const& rhs) const;
		Fixed	operator!=(Fixed const& rhs) const;

		Fixed	operator++(void);
		Fixed	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed const& max(Fixed const& a, Fixed const& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static Fixed const& min(Fixed const& a, Fixed const& b);
		static Fixed& min(Fixed& a, Fixed& b);

	private:

		int					_val;
		int const static 	_bits = 8;
};

std::ostream& operator<<(std::ostream & o, Fixed const& rhs);



#endif
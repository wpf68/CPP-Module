/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 07:52:45 by pwolff            #+#    #+#             */
/*   Updated: 2022/09/11 07:52:45 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <list>
# include <stack>

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
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void) : std::stack<T>()
	{
	}

	~MutantStack(void)
	{
	}

    MutantStack<T>& operator=(MutantStack const& rhs)
    {
        if (this == &rhs)
            return(*this);
        std::stack<T>::c = rhs.c;
        return(*this);
    }

 // typedef typename std::deque<T>::iterator iterator;
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin()
    {
        return (std::stack<T>::c.begin());
    }
    iterator end()
    {
        return (this->c.end());
    }
    
    /*
    typedef typename std::deque<T>::iterator iterator;
    iterator begin() 
    { 
        return std::stack<T>::c.begin(); 
    }
    iterator end() 
    { 
        return std::stack<T>::c.end(); 
    }
    */

private:

};

#endif	
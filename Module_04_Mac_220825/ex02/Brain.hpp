/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:02:21 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/21 11:02:21 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"

class Brain
{
public:
	Brain(void);
	Brain(Brain const& src);
	Brain(const std::string& name);
	Brain& operator=(Brain const& rhs);
	virtual ~Brain(void);

protected:
	std::string	_type;
	std::string	_ideas[100];
};

#endif
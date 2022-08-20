/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:23:52 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/20 17:23:52 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(const std::string& name);
	Dog(Dog const& src);
	Dog& operator=(Dog const& rhs);
	virtual ~Dog(void);

	void	makeSound(void) const;

private:

};

#endif


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:03:54 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/21 11:03:54 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

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
	Brain* _Brain;

};

#endif
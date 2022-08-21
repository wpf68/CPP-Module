/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:03:22 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/21 11:03:22 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"


class Cat : public Animal
{
public:
	Cat(void);
	Cat(const std::string& name);
	Cat(Cat const& src);
	Cat& operator=(Cat const& rhs);
	virtual ~Cat(void);

	void	makeSound(void) const;

private:
	Brain* _Brain;

};

#endif
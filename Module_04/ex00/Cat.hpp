/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:23:26 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/20 17:23:26 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

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

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:25:32 by pwolff            #+#    #+#             */
/*   Updated: 2022/08/20 17:25:32 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(const std::string& name);
	WrongCat(WrongCat const& src);
	WrongCat& operator=(WrongCat const& rhs);
	virtual ~WrongCat(void);

	void	makeSound(void) const;

private:

};

#endif
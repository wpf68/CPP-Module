/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialisation.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:38:23 by pwolff            #+#    #+#             */
/*   Updated: 2022/09/04 12:38:23 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialisation.hpp"

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	uint_data;

	uint_data = reinterpret_cast<uintptr_t>(ptr);

	return (uint_data);
}

Data* deserialize(uintptr_t raw)
{
	Data* p_data;

	p_data = reinterpret_cast<Data*> (raw);

	return (p_data);
}

s_data2::s_data2(int i, std::string data) : i(i), data(data) 
{
}
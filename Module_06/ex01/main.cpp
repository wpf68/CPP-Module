/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:38:00 by pwolff            #+#    #+#             */
/*   Updated: 2022/09/04 12:38:00 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialisation.hpp"

int	main(void)
{
	Data		data;
	Data*		test_data = nullptr;
	uintptr_t	test_uint;
	Data*		test_data2 = nullptr;
	uintptr_t	test_uint2;

	ft_present();

	Data2 data2(42, "TEST struc/class");
	std::cout << GREEN "data2.i = " << data2.i << " -- data2.data = " << data2.data << NONE << std::endl;

	std::cout << WHITE "\n--------  Test 1  -------------" NONE << std::endl;
	std::cout << CYANE "test_data : " << test_data << NONE << std::endl;

	data.i = 25;
	data.data = "Hello World";
	test_data = &data;

	std::cout << CYANE "data      : " << & data << NONE << std::endl;
	std::cout << CYANE "test_data : " << test_data << NONE << std::endl;
	std::cout << GREEN "data.i       = " << data.i << " -- data.data       = " << data.data << NONE << std::endl;
	std::cout << GREEN "test_data->i = " << test_data->i << " -- test_data->data = " << test_data->data << NONE << std::endl;
	test_uint = serialize(test_data);
	test_data = deserialize(test_uint);
	std::cout << YELLOW"\nResult :" NONE << std::endl;
	std::cout << CYANE "test_data : " << test_data << NONE << std::endl;
	std::cout << ROSE "test_uint : " << &test_uint << NONE << std::endl;
	std::cout << GREEN "test_data->i = " << test_data->i << " -- test_data->data = " << test_data->data << NONE << std::endl;

	std::cout << WHITE "\n--------  Test 2  -------------" NONE << std::endl;
	std::cout << CYANE "test_data2 : " << test_data2 << NONE << std::endl;
	test_uint2 = serialize(&data);
	test_data2 = deserialize(test_uint2);
	std::cout << YELLOW "\nResult :" NONE << std::endl;
	std::cout << CYANE "data       : " << &data << NONE << std::endl;
	std::cout << CYANE "test_data2 : " << test_data2 << NONE << std::endl;
	std::cout << ROSE "test_uint2 : " << test_uint2 << NONE << std::endl;
	std::cout << GREEN "test_data2->i = " << test_data2->i << " -- test_data2->data = " << test_data2->data << NONE << std::endl;

	std::cout << std::endl;

	return (0);
}

/* ********************************************************************************************************* */
/* ********************************************************************************************************* */

void ft_present(void)
{
	std::cout << CLEAR << std::endl;
	std::cout << RED;
	std::cout << "    _____     __          _           _   _                 _     _" << std::endl;
	std::cout << "   / ____|   /_/         (_)         | | (_)               | |   (_)" << std::endl;
	std::cout << "  | (___     ___   _ __   _    __ _  | |  _   ___    __ _  | |_   _    ___    _ __" << std::endl;
	std::cout << "   \\___ \\   / _ \\ | '__| | |  / _` | | | | | / __|  / _` | | __| | |  / _ \\  | '_ \\" << std::endl;
	std::cout << "   ____) | |  __/ | |    | | | (_| | | | | | \\__ \\ | (_| | | |_  | | | (_) | | | | |" << std::endl;
	std::cout << "  |_____/   \\___| |_|    |_|  \\__,_| |_| |_| |___/  \\__,_|  \\__| |_ | \\___/  |_| |_|" << std::endl;
	std::cout << NONE << std::endl;
	std::cout << std::endl;
}
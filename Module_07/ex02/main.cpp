/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwolff <pwolff@student.42mulhouse.fr>>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 08:20:01 by pwolff            #+#    #+#             */
/*   Updated: 2022/09/07 08:20:01 by pwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750
//#define MAX_VAL 7

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << RED "didn't save the same value!!" NONE << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch (const std::exception& e)
    {
        std::cout << RED "invalid index" NONE << std::endl;
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch (const std::exception& e)
    {
        std::cout << RED "invalid index" NONE << std::endl;
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete[] mirror;//


    /* ***************************************** NEW TESTS ********************************* */

    std::cout << CYANE "\n****************************" << std::endl;
    Array<int>   test;

    std::cout << CYANE "\n****************************" << std::endl;
    Array<std::string>  testString(2);
    try
    {
        testString[0] = "Hello";
        testString[1] = "World";
        testString.ft_display();
    }
    catch (const std::exception& e)
    {
        std::cout << RED "invalid index" NONE << std::endl;
        std::cerr << e.what() << '\n';
    }

    try
    {
        testString[0] = "Hello 2";
        testString[1] = "World 2";
        testString[3] = "-- KO --- 2";
        testString.ft_display();
    }
    catch (const std::exception& e)
    {
        std::cout << RED "invalid index" NONE << std::endl;
        testString.ft_display();
        std::cerr << e.what() << '\n';
    }
    std::cout << CYANE "\n****************************" << std::endl;


    std::cerr << CYANE "\n---------  Test by copy ------------" NONE << std::endl;
    Array<std::string> testSting2 = testString;
    for (int i = 0; i < 2; i++)
    {
        if (testSting2[i] != testString[i])
        {
            std::cerr << RED "didn't save the same value!!" NONE << std::endl;
            return 1;
        }
        else
            std::cerr << GREEN "Test copy OK" NONE << std::endl;

    }
    std::cerr << CYANE "---------  Test by copy // modification one value ------------" NONE << std::endl;
    testSting2[0] = "error";
    for (int i = 0; i < 2; i++)
    {
        if (testSting2[i] != testString[i])
        {
            std::cerr << RED "testSting2 didn't save the same value testString !!! - by copy" NONE << std::endl;
        }
        else
            std::cerr << GREEN "Test copy OK" NONE << std::endl;
    }

    std::cerr << CYANE "\n---------  Test by assignement ------------" NONE << std::endl;
    testSting2 = testString;
    for (int i = 0; i < 2; i++)
    {
        if (testSting2[i] != testString[i])
        {
            std::cerr << RED "didn't save the same value!!" NONE << std::endl;
        }
        else
            std::cerr << GREEN "Test assigenement OK" NONE << std::endl;
    }
    std::cerr << CYANE "---------  Test by assignement // modification one value ------------" NONE << std::endl;
    testSting2[0] = "error2";
    for (int i = 0; i < 2; i++)
    {
        if (testSting2[i] != testString[i])
        {
            std::cerr << RED "testSting2 didn't save the same value testString !!! - by assignement" NONE << std::endl;
        }
        else
            std::cerr << GREEN "Test assignement OK" NONE << std::endl;
    }
    return 0;
}
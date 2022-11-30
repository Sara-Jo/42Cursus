/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 22:43:50 by sjo               #+#    #+#             */
/*   Updated: 2022/11/30 22:43:58 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void)
{
    std::cout << "Test#1 Constructor  Array<int>" << std::endl;
    {
        Array<int> arr(5);
        for (unsigned int i = 0; i < 5; i++)
            arr[i] = i;
        for (unsigned int i = 0; i < 5; i++)
            std::cout << arr[i] << " ";
        std::cout << std::endl;
    }

    std::cout << "Test#2 Constructor Array<char>" << std::endl;
    {
        Array<char> arr(5);
        for (unsigned int i = 0; i < 5; i++)
            arr[i] = 'a' + i;
        for (unsigned int i = 0; i < 5; i++)
            std::cout << arr[i] << " ";
        std::cout << std::endl;
    }

    std::cout << "Test#3 Copy Constructor" << std::endl;
    {
        Array<int> arr(5);
        for (unsigned int i = 0; i < 5; i++)
            arr[i] = i;

        Array<int> arr2(arr);
        for (unsigned int i = 0; i < 5; i++)
            std::cout << arr2[i] << " ";
        std::cout << std::endl;
    }

    std::cout << "Test#4 Copy Assignment" << std::endl;
    {
        Array<int> arr(5);
        for (unsigned int i = 0; i < 5; i++)
            arr[i] = i;

        Array<int> arr2(10);
        for (unsigned int i = 0; i < 10; i++)
            arr2[i] = i * 10;

        arr2 = arr;
        for (unsigned int i = 0; i < 5; i++)
            std::cout << arr2[i] << " ";
        std::cout << std::endl;
    }

    std::cout << "Test#5 Out of Range" << std::endl;
    {
        Array<int> arr(5);
        for (unsigned int i = 0; i < 5; i++)
            arr[i] = i;

        try
        {
            std::cout << arr[5] << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    return 0;
}
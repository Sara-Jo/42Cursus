/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 00:04:05 by sjo               #+#    #+#             */
/*   Updated: 2022/12/01 00:10:04 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "Span.hpp"

int main(void)
{
    std::cout << "test#1 Span is full error" << std::endl;
    {
        try
        {
            Span sp = Span(2);
            sp.addNumber(3);
            sp.addNumber(5);
            sp.addNumber(17);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
    }

    std::cout << "test#2 Span is full error" << std::endl;
    {
        try
        {
            std::vector<int> arr(3);
            arr[0] = 3;
            arr[1] = 5;
            arr[2] = 17;
            Span sp = Span(2);
            sp.addNumber(arr.begin(), arr.end());
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
    }

    std::cout << "test#3 Not enough numbers error - shortestSpan" << std::endl;
    {
        try
        {
            Span sp = Span(2);
            sp.addNumber(3);
            sp.shortestSpan();
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
    }

    std::cout << "test#4 Not enough numbers error - longestSpan" << std::endl;
    {
        try
        {
            Span sp = Span(2);
            sp.addNumber(3);
            sp.longestSpan();
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
    }

    std::cout << "test#5 sp1" << std::endl;
    {
        std::vector<int> arr(10000);
        std::srand(time(NULL));
        for (int i = 0; i < 10000; i++)
            arr[i] = std::rand() % 10000;

        Span sp = Span(10000);
        sp.addNumber(arr.begin(), arr.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        std::cout << std::endl;
    }

    std::cout << "test#6 sp2" << std::endl;
    {
        Span sp2 = Span(5);
        sp2.addNumber(-1);
        sp2.addNumber(-2);
        sp2.addNumber(5);
        sp2.addNumber(10);
        sp2.addNumber(11);
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;

        std::cout << std::endl;
    }
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 23:43:15 by sjo               #+#    #+#             */
/*   Updated: 2022/11/30 23:43:23 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <queue>
#include <vector>
#include "easyfind.hpp"

int main(void)
{
    try
    {
        std::vector<int> v;
        std::list<int> l;
        std::deque<int> d;

        for (int i = 0; i < 10; i++)
        {
            v.push_back(i);
            l.push_back(i);
            d.push_back(i);
        }

        std::cout << "Vector: " << *easyfind(v, 5) << std::endl;
        std::cout << "List: " << *easyfind(l, 5) << std::endl;
        std::cout << "Deque: " << *easyfind(d, 5) << std::endl;

        std::cout << "Deque: " << *easyfind(d, 200) << std::endl;
        return 0;
    }
    catch (std::exception &e)
    {
        std::cout << "not found" << std::endl;
        return 1;
    }
}
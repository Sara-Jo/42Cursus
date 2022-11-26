/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:17:20 by sjo               #+#    #+#             */
/*   Updated: 2022/11/26 13:17:48 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap sjo("sjo");

    std::cout << std::endl;
    std::cout << "-----highFivesGuys()-----" << std::endl;
    sjo.highFivesGuys();
    std::cout << std::endl;
}
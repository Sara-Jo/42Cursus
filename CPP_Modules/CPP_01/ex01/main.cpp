/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:33:31 by sjo               #+#    #+#             */
/*   Updated: 2022/11/17 14:34:43 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    Zombie* horde = zombieHorde(10, "Horde");

    for (int i = 0; i < 10; i++)
        horde[i].announce();

    delete[] horde;
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:46:18 by sjo               #+#    #+#             */
/*   Updated: 2022/11/18 13:42:17 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    Zombie zombieStack = Zombie("stack");
    Zombie* zombieHeap = new Zombie("heap");
    Zombie* zombieNew = newZombie("newZombie");

    zombieStack.announce();
    zombieHeap->announce();
    zombieNew->announce();
    randomChump("randomChump");
    delete zombieHeap;
    delete zombieNew;

    return 0;
}
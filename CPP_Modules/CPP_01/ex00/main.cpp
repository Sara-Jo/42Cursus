/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:46:18 by sjo               #+#    #+#             */
/*   Updated: 2022/11/16 15:56:55 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
    Zombie zombie("Foo");
    zombie.announce();

    randomChump("randomChump");

    Zombie* newZombie1 = newZombie("newZombie");
    newZombie1->announce();
    delete newZombie1;

    return 0;
}
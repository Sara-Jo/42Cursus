/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:35:04 by sjo               #+#    #+#             */
/*   Updated: 2022/11/21 18:37:37 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
    ClapTrap *c1 = new ClapTrap();
	ClapTrap *c2 = new ClapTrap("Zoro");
	ClapTrap *c3 = new ClapTrap(*c1);

	std::cout << std::endl;

	c1->attack("Slime");
	c2->attack("Sanji");
	c3->attack("Slime shiny");

	std::cout << std::endl;

	c1->takeDamage(80);
	c2->takeDamage(5);
	c2->takeDamage(5);
	c2->takeDamage(5);
	c3->takeDamage(5);

	std::cout << std::endl;

	c1->beRepaired(1000);
	c2->beRepaired(1);
	c3->beRepaired(5);

	std::cout << std::endl;

	delete c1;
	delete c2;
	delete c3;
}
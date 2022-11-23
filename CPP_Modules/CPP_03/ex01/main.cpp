/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:38:21 by sjo               #+#    #+#             */
/*   Updated: 2022/11/23 17:01:35 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
  ScavTrap sjo("sjo");

  std::cout << std::endl;
  std::cout << "-----Test#1 guardGate()-----" << std::endl;
  sjo.guardGate();
  std::cout << std::endl;

  std::cout << "-----Test#2 attack()-----" << std::endl;
  for (int i = 0; i < 50; i++) {
    sjo.attack("pikachu");
  }
  sjo.attack("pikachu");
  std::cout << std::endl;
}
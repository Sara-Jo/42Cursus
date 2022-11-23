/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:37:25 by sjo               #+#    #+#             */
/*   Updated: 2022/11/23 16:43:00 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : name("ClapTrap"), hitPoints(10), energyPoints(10), attackDamage(0) {
  std::cout << "ClapTrap " << name << " has created." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
  std::cout << "ClapTrap " << name << " has created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj) {
  *this = obj;
  std::cout << "ClapTrap " << name << " has created." << std::endl;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap " << name << " has destroyed." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj) {
  name = obj.name;
  hitPoints = obj.hitPoints;
  energyPoints = obj.energyPoints;
  attackDamage = obj.attackDamage;
  return *this;
}

void ClapTrap::attack(std::string const& target) {
  if (hitPoints == 0) {
    std::cout << "ClapTrap " << name << " is dead." << std::endl;
  } else if (energyPoints == 0) {
    std::cout << "ClapTrap " << name << " is out of energy." << std::endl;
  } else {
    energyPoints--;
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing "
              << attackDamage << " points of damage!" << std::endl;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (hitPoints == 0) {
    std::cout << "ClapTrap " << name << " is already dead." << std::endl;
  } else if (hitPoints <= amount) {
    hitPoints = 0;
    std::cout << "ClapTrap " << name << " die." << std::endl;
  } else {
    hitPoints -= amount;
    std::cout << "ClapTrap " << name << " takes " << amount
              << " points of damage!" << std::endl;
  }
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (hitPoints == 0) {
    std::cout << "ClapTrap " << name << " is dead." << std::endl;
  } else if (energyPoints == 0) {
    std::cout << "ClapTrap " << name << " is out of energy." << std::endl;
  } else {
    hitPoints += amount;
    energyPoints--;
    std::cout << "ClapTrap " << name << " is repaired by " << amount
              << " points!" << std::endl;
  }
}
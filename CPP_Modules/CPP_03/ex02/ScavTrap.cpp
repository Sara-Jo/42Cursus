/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:14:46 by sjo               #+#    #+#             */
/*   Updated: 2022/11/26 13:14:47 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    name = "ScavTrap";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " has created." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " has created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
    *this = obj;
    std::cout << "ScavTrap " << name << " has created." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " has destroyed." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    name = obj.name;
    hitPoints = obj.hitPoints;
    energyPoints = obj.energyPoints;
    attackDamage = obj.attackDamage;
    return *this;
}

void ScavTrap::attack(std::string const &target)
{
    if (hitPoints == 0)
    {
        std::cout << "ScavTrap " << name << " is dead." << std::endl;
    }
    else if (energyPoints == 0)
    {
        std::cout << "ScavTrap " << name << " is out of energy." << std::endl;
    }
    else
    {
        energyPoints--;
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing "
                  << attackDamage << " points of damage!" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " has entered in Gate keeper mode."
              << std::endl;
}
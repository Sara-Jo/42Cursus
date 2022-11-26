/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 13:15:48 by sjo               #+#    #+#             */
/*   Updated: 2022/11/26 13:18:45 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    name = "FragTrap";
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " has created." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " has created." << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
    std::cout << "FragTrap " << name << " has copied." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " has destroyed." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
    std::cout << "FragTrap " << name << " has assigned." << std::endl;
    name = obj.name;
    hitPoints = obj.hitPoints;
    energyPoints = obj.energyPoints;
    attackDamage = obj.attackDamage;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " gives high five to you!" << std::endl;
}
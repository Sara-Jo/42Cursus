/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:34:01 by sjo               #+#    #+#             */
/*   Updated: 2022/11/17 18:44:59 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}

void HumanB::attack(void) {
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << "!" << std::endl;
    else
        std::cout << this->name << " attacks with no weapon." << std::endl;
}
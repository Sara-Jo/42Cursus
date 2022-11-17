/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:29:20 by sjo               #+#    #+#             */
/*   Updated: 2022/11/17 18:33:09 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
    private:
     std::string name;
     Weapon* weapon;

    public:
     HumanB(std::string name);
     ~HumanB();
     void setWeapon(Weapon& weapon);
     void attack(void);
};

#endif
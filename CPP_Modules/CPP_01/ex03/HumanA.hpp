/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:22:08 by sjo               #+#    #+#             */
/*   Updated: 2022/11/17 18:24:39 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
    private:
     std::string name;
     Weapon& weapon;

    public:
     HumanA(std::string name, Weapon& weapon);
     ~HumanA();
     void attack(void);
};

#endif
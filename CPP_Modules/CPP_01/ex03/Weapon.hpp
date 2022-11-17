/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:07:34 by sjo               #+#    #+#             */
/*   Updated: 2022/11/17 18:21:53 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
    private:
     std::string type;

    public:
     Weapon(std::string type);
     ~Weapon();
     const std::string& getType(void);
     void setType(std::string type);
};

#endif
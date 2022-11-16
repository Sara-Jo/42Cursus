/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:42:22 by sjo               #+#    #+#             */
/*   Updated: 2022/11/16 15:45:28 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    private:
     std::string name;

    public:
     Zombie();
     Zombie(std::string name);
     ~Zombie();

     void announce() const;
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
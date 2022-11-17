/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:19:38 by sjo               #+#    #+#             */
/*   Updated: 2022/11/17 14:22:21 by sjo              ###   ########.fr       */
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
     void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
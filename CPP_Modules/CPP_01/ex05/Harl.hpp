/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:53:54 by sjo               #+#    #+#             */
/*   Updated: 2022/11/17 19:55:18 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string>

class Harl {
    public:
     Harl();
     ~Harl();
     void complain(std::string level);

    private:
     void debug();
     void info();
     void warning();
     void error();
};

#endif
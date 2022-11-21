/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:33:11 by sjo               #+#    #+#             */
/*   Updated: 2022/11/21 18:33:58 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
 public:
  ClapTrap();
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap& rhs);
  ~ClapTrap();

  ClapTrap& operator=(const ClapTrap& rhs);

  void attack(std::string const& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

 private:
  std::string name;
  unsigned int hitPoints;
  unsigned int energyPoints;
  unsigned int attackDamage;
};

#endif
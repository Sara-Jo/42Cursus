/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:37:48 by sjo               #+#    #+#             */
/*   Updated: 2022/11/23 16:43:00 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 public:
  ScavTrap();
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap& obj);
  ~ScavTrap();

  ScavTrap& operator=(const ScavTrap& obj);

  void attack(std::string const& target);
  void guardGate();

 private:
};

#endif
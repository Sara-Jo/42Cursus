/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:09:17 by sjo               #+#    #+#             */
/*   Updated: 2022/11/28 15:11:03 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
  std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& obj) {
  std::cout << "Brain copy constructor called" << std::endl;
  *this = obj;
}

Brain::~Brain(void) {
  std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& obj) {
  std::cout << "Brain assignation operator called" << std::endl;
  for (int i = 0; i < 100; i++)
    this->_ideas[i] = obj._ideas[i];
  return *this;
}
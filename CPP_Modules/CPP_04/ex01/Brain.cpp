/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:09:17 by sjo               #+#    #+#             */
/*   Updated: 2022/11/28 18:26:45 by sjo              ###   ########.fr       */
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
    this->ideas[i] = obj.ideas[i];
  return *this;
}

std::string Brain::getIdea(size_t i) {
    if (i < 100)
      return (this->ideas[i]);
    else
      return ("Invalid index.");
}

void	Brain::setIdea(int i, std::string idea)
{
	if (i < 100)
		this->ideas[i] = idea;
	else
		std::cout << "Invalid index." << std::endl;
}
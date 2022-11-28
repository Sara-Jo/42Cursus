/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:40:57 by sjo               #+#    #+#             */
/*   Updated: 2022/11/28 16:40:14 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
  std::cout << "Cat constructor called" << std::endl;
  this->type = "Cat";
  this->brain = new Brain();
};

Cat::Cat(const Cat& obj) {
  std::cout << "Cat copy constructor called" << std::endl;
  this->brain = new Brain();
  *this = obj;
}

Cat::~Cat() {
  std::cout << "Cat destructor called" << std::endl;
  delete this->brain;
}

Cat& Cat::operator=(const Cat& obj) {
  std::cout << "Cat assignation operator called" << std::endl;
  this->type = obj.type;
  *this->brain = *obj.brain;
  return *this;
}

void Cat::makeSound() const {
  std::cout << "Meow~ Meow~" << std::endl;
}

Brain *Cat::getBrain() const {
  return (this->brain);
}
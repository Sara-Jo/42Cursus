/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:40:31 by sjo               #+#    #+#             */
/*   Updated: 2022/11/29 15:12:24 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
  std::cout << "Dog constructor called" << std::endl;
  this->type = "Dog";
  this->brain = new Brain();
};

Dog::Dog(const Dog& obj) {
  std::cout << "Dog copy constructor called" << std::endl;
  this->brain = new Brain();
  *this = obj;
}

Dog::~Dog() {
  delete this->brain;
  std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj) {
  std::cout << "Dog assignation operator called" << std::endl;
  this->type = obj.type;
  *this->brain = *obj.brain;
  return *this;
}

void Dog::makeSound() const {
  std::cout << "Bowwow! Bowwow!" << std::endl;
}

Brain *Dog::getBrain() const {
  return (this->brain);
}
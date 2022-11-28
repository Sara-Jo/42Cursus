/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:40:31 by sjo               #+#    #+#             */
/*   Updated: 2022/11/28 16:16:17 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal() {
  type = "Dog";
  std::cout << "Dog constructor called" << std::endl;
};

Dog::Dog(const Dog& obj) {
  std::cout << "Dog copy constructor called" << std::endl;
  *this = obj;
}

Dog::~Dog() {
  std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj) {
  std::cout << "Dog assignation operator called" << std::endl;
  type = obj.type;
  return *this;
}

void Dog::makeSound() const {
  std::cout << "Bowwow! Bowwow!" << std::endl;
}
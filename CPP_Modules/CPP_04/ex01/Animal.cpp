/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:39:53 by sjo               #+#    #+#             */
/*   Updated: 2022/11/28 16:19:12 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
  std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& obj) {
  std::cout << "Animal copy constructor called" << std::endl;
  *this = obj;
}

Animal& Animal::operator=(const Animal& obj) {
  std::cout << "Animal assignation operator called" << std::endl;
  this->type = obj.type;
  return *this;
}

Animal::~Animal() {
  std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const {
  std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const {
  return type;
}
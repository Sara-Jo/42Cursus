/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:39:53 by sjo               #+#    #+#             */
/*   Updated: 2022/11/28 13:48:25 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
  std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& obj) {
  std::cout << "Animal copy constructor called" << std::endl;
  *this = obj;
}

Animal& Animal::operator=(const Animal& obj) {
  std::cout << "Animal assignation operator called" << std::endl;
  _type = obj._type;
  return *this;
}

Animal::~Animal() {
  std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const {
  std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const {
  return _type;
}
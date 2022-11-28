/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:41:54 by sjo               #+#    #+#             */
/*   Updated: 2022/11/28 13:48:25 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
  std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) {
  std::cout << "WrongAnimal copy constructor called" << std::endl;
  *this = obj;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) {
  std::cout << "WrongAnimal assignation operator called" << std::endl;
  _type = obj._type;
  return *this;
}

void WrongAnimal::makeSound() const {
  std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const {
  return _type;
}
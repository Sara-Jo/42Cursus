/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:00:20 by sjo               #+#    #+#             */
/*   Updated: 2022/11/28 16:14:27 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal") {
  std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& obj) {
  std::cout << "AAnimal copy constructor called" << std::endl;
  *this = obj;
}

AAnimal& AAnimal::operator=(const AAnimal& obj) {
  std::cout << "AAnimal assignation operator called" << std::endl;
  type = obj.type;
  return *this;
}

AAnimal::~AAnimal() {
  std::cout << "AAnimal destructor called" << std::endl;
}

void AAnimal::makeSound() const {
  std::cout << "AAnimal sound" << std::endl;
}

std::string AAnimal::getType() const {
  return type;
}
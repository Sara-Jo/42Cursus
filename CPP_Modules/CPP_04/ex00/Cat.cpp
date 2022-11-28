/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:40:57 by sjo               #+#    #+#             */
/*   Updated: 2022/11/28 13:48:25 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
  _type = "Cat";
  std::cout << "Cat constructor called" << std::endl;
};

Cat::Cat(const Cat& obj) {
  std::cout << "Cat copy constructor called" << std::endl;
  *this = obj;
}

Cat::~Cat() {
  std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj) {
  std::cout << "Cat assignation operator called" << std::endl;
  _type = obj._type;
  return *this;
}

void Cat::makeSound() const {
  std::cout << "Meow~ Meow~" << std::endl;
}
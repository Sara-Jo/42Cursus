/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:42:40 by sjo               #+#    #+#             */
/*   Updated: 2022/11/28 13:48:25 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
  _type = "WrongCat";
  std::cout << "WrongCat constructor called" << std::endl;
};

WrongCat::WrongCat(const WrongCat& obj) {
  std::cout << "WrongCat copy constructor called" << std::endl;
  *this = obj;
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj) {
  std::cout << "WrongCat assignation operator called" << std::endl;
  _type = obj._type;
  return *this;
}

void WrongCat::makeSound() const {
  std::cout << "Meow! Meow!" << std::endl;
}
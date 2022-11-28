/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:01:10 by sjo               #+#    #+#             */
/*   Updated: 2022/11/28 16:03:36 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  std::cout << "-----Test#1 new Dog()-----" << std::endl;
  {
    const AAnimal* dog = new Dog();
    std::cout << dog->getType() << std::endl;
    dog->makeSound();
    delete dog;
  }
  std::cout << std::endl;

  std::cout << "-----Test#2 new Cat()-----" << std::endl;
  {
    const AAnimal* cat = new Cat();
    std::cout << cat->getType() << std::endl;
    cat->makeSound();
    delete cat;
  }
  std::cout << std::endl;

  return 0;
}
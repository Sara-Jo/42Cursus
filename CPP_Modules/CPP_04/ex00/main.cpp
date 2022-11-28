/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:42:58 by sjo               #+#    #+#             */
/*   Updated: 2022/11/28 13:49:36 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
  std::cout << "-----Test#1 new Animal()-----" << std::endl;
  {
    const Animal* meta = new Animal();
    std::cout << meta->getType() << std::endl;
    meta->makeSound();
    delete meta;
  }
  std::cout << std::endl;

  std::cout << "-----Test#2 new Dog()-----" << std::endl;
  {
    const Animal* dog = new Dog();
    std::cout << dog->getType() << std::endl;
    dog->makeSound();
    delete dog;
  }
  std::cout << std::endl;

  std::cout << "-----Test#3 new Cat()-----" << std::endl;
  {
    const Animal* cat = new Cat();
    std::cout << cat->getType() << std::endl;
    cat->makeSound();
    delete cat;
  }
  std::cout << std::endl;

  std::cout << "-----Test#4 new WrongAnimal()-----" << std::endl;
  {
    const WrongAnimal* meta = new WrongAnimal();
    std::cout << meta->getType() << std::endl;
    meta->makeSound();
    delete meta;
  }
  std::cout << std::endl;

  std::cout << "-----Test#5 new WrongCat()-----" << std::endl;
  {
    const WrongAnimal* cat = new WrongCat();
    std::cout << cat->getType() << std::endl;
    cat->makeSound();
    delete cat;
  }
  std::cout << std::endl;

  return 0;
}
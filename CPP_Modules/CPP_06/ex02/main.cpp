/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:09:05 by sjo               #+#    #+#             */
/*   Updated: 2022/11/30 16:09:10 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate() {
  int type;
  Base* ret;

  std::srand(std::time(NULL));
  type = rand() % 3;
  if (type == 0) {
    ret = new A();
  } else if (type == 1) {
    ret = new B();
  } else {
    ret = new C();
  }
  return (ret);
}

void identify(Base* p) {
  std::cout << "identify(Base* p)" << std::endl;
  if (dynamic_cast<A*>(p))
    std::cout << "Hi, I am A!!!" << std::endl;
  if (dynamic_cast<B*>(p))
    std::cout << "Hi, I am B!!!" << std::endl;
  if (dynamic_cast<C*>(p))
    std::cout << "Hi, I am C!!!" << std::endl;
}

void identify(Base& ref) {
  std::cout << "identify(Base& ref)" << std::endl;
  try {
    A& a = dynamic_cast<A&>(ref);
    (void)a;
    std::cout << "Hi, I am A!!!" << std::endl;
  } catch (std::exception& e) {
  }
  try {
    B& b = dynamic_cast<B&>(ref);
    (void)b;
    std::cout << "Hi, I am B!!!" << std::endl;
  } catch (std::exception& e) {
  }
  try {
    C& c = dynamic_cast<C&>(ref);
    (void)c;
    std::cout << "Hi, I am C!!!" << std::endl;
  } catch (std::exception& e) {
  }
}

int main() {
  Base* base = generate();
  identify(base);
  identify(*base);
  delete base;
}
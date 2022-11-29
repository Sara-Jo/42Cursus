/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:40:29 by sjo               #+#    #+#             */
/*   Updated: 2022/11/29 14:15:41 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include "Bureaucrat.hpp"

int main(void) {
  std::cout << "Test 1: incrementGrade" << std::endl;
  {
    try {
      Bureaucrat sjo("sjo", 2);

      std::cout << sjo << std::endl;
      sjo.incrementGrade();
      std::cout << sjo << std::endl;
      sjo.incrementGrade();
      std::cout << sjo << std::endl;
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
  }

  std::cout << std::endl;
  std::cout << "Test 2: decrementGrade" << std::endl;
  {
    try {
      Bureaucrat foo("foo", 149);
      std::cout << foo << std::endl;
      foo.decrementGrade();
      std::cout << foo << std::endl;
      foo.decrementGrade();
      std::cout << foo << std::endl;
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
  }
  return 0;
}
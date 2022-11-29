/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:26:57 by sjo               #+#    #+#             */
/*   Updated: 2022/11/29 20:36:55 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
  std::cout << "-----Test#1 Form constructor grade too high-----" << std::endl;
  {
    try {
      Form form = Form("TEST_FORM", 0, 0);
      std::cout << form;
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << std::endl;

  std::cout << "-----Test#2 Form constructor grade too low-----" << std::endl;
  {
    try {
      Form form = Form("TEST_FORM", 151, 151);
      std::cout << form;
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << std::endl;

  std::cout << "-----Test#3 signForm(): throw exception-----" << std::endl;
  {
    try {
      Bureaucrat sjo("sjo", 50);
      Form form = Form("TEST_FORM", 1, 100);
      std::cout << form << std::endl;
      sjo.signForm(form);
      std::cout << form;
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << std::endl;
  std::cout << std::endl;

  std::cout << "-----Test#4 signForm(): no exception-----" << std::endl;
  {
    try {
      Bureaucrat sjo("sjo", 1);
      Form form = Form("TEST_FORM", 1, 100);
      std::cout << form << std::endl;
      sjo.signForm(form);
      std::cout << form;
    } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << std::endl;
  return 0;
}
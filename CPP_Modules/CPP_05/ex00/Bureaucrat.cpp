/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:39:38 by sjo               #+#    #+#             */
/*   Updated: 2022/11/29 13:40:07 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <stdexcept>

Bureaucrat::Bureaucrat() : name("default"), grade(150) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name) {
  if (grade < 1)
    throw Bureaucrat::GradeTooHighException();
  else if (grade > 150)
    throw Bureaucrat::GradeTooLowException();
  else
    grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name(obj.name) {
  grade = obj.grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
  if (this == &obj)
    return (*this);
  grade = obj.grade;
  return (*this);
}

const std::string& Bureaucrat::getName(void) const {
  return (name);
}

int Bureaucrat::getGrade(void) const {
  return (grade);
}

void Bureaucrat::incrementGrade(void) {
  if (grade == 1)
    throw Bureaucrat::GradeTooHighException();
  else
    grade--;
}

void Bureaucrat::decrementGrade(void) {
  if (grade == 150)
    throw Bureaucrat::GradeTooLowException();
  else
    grade++;
}

std::runtime_error Bureaucrat::GradeTooHighException() {
  return (std::runtime_error("Grade too high"));
}

std::runtime_error Bureaucrat::GradeTooLowException() {
  return (std::runtime_error("Grade too low"));
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
  os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
  return (os);
}
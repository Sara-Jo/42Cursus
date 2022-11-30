/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 00:43:12 by sjo               #+#    #+#             */
/*   Updated: 2022/11/30 14:53:03 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &obj)
{
    *this = obj;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &obj)
{
    (void)obj;
    return (*this);
}

Form* Intern::makeForm(const std::string formName, const std::string target) {
  std::string formNames[3] = {"presidential pardon", "robotomy request",
                              "shrubbery creation"};
  int i = 0;
  for (; i < 3; i++) {
    if (formName == formNames[i])
      break;
  }
  switch (i) {
    case 0:
      return (new PresidentialPardonForm(target));
    case 1:
      return (new RobotomyRequestForm(target));
    case 2:
      return (new ShrubberyCreationForm(target));
  }
  throw Intern::UnknownFormException();
  return (NULL);
}

const char *Intern::UnknownFormException::what() const throw()
{
    return ("Intern: Unknown form");
}

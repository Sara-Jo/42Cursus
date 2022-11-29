/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:38:48 by sjo               #+#    #+#             */
/*   Updated: 2022/11/29 22:52:25 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include <string>

class Form;

class Bureaucrat
{
private:
  const std::string name;
  int grade;

public:
  Bureaucrat();
  Bureaucrat(const std::string &name, int grade);
  Bureaucrat(const Bureaucrat &obj);
  ~Bureaucrat();
  Bureaucrat &operator=(const Bureaucrat &obj);

  const std::string &getName(void) const;
  int getGrade(void) const;
  void incrementGrade(void);
  void decrementGrade(void);

  void signForm(Form &obj);
  void executeForm(Form &obj);

  class GradeTooHighException : public std::exception
  {
  public:
    const char *what() const throw();
  };
  class GradeTooLowException : public std::exception
  {
  public:
    const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:23:16 by sjo               #+#    #+#             */
/*   Updated: 2022/11/29 23:51:39 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <stdexcept>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
private:
  const std::string _name;
  bool _signed;
  const int _gradeToSign;
  const int _gradeToExec;

public:
  Form();
  Form(const std::string &name, int gradeToSign, int gradeToExec);
  Form(const Form &obj);
  virtual ~Form();
  Form &operator=(const Form &obj);

  const std::string &getName(void) const;
  bool getSigned(void) const;
  int getGradeToSign(void) const;
  int getGradeToExecute(void) const;

  void beSigned(const Bureaucrat &obj);
  virtual void execute(const Bureaucrat &executor) const = 0;

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
  class NotSignedException : public std::exception
  {
  public:
    const char *what() const throw();
  };
};

std::ostream &operator<<(std::ostream &os, const Form &obj);

#endif
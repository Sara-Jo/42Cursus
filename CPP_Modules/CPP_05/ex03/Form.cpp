/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:23:51 by sjo               #+#    #+#             */
/*   Updated: 2022/11/29 23:51:42 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
    : _name("default"), _signed(false), _gradeToSign(150), _gradeToExec(150) {}

Form::Form(const std::string &name, int gradeToSign, int gradeToExec)
    : _name(name),
      _signed(false),
      _gradeToSign(gradeToSign),
      _gradeToExec(gradeToExec)
{
  if (gradeToSign < 1 || gradeToExec < 1)
    throw Form::GradeTooHighException();
  else if (gradeToSign > 150 || gradeToExec > 150)
    throw Form::GradeTooLowException();
}

Form::Form(const Form &obj)
    : _name(obj._name),
      _signed(obj._signed),
      _gradeToSign(obj._gradeToSign),
      _gradeToExec(obj._gradeToExec) {}

Form::~Form() {}

Form &Form::operator=(const Form &obj)
{
  if (this == &obj)
    return (*this);
  _signed = obj._signed;
  return (*this);
}

const std::string &Form::getName(void) const
{
  return (_name);
}

bool Form::getSigned(void) const
{
  return (_signed);
}

int Form::getGradeToSign(void) const
{
  return (_gradeToSign);
}

int Form::getGradeToExecute(void) const
{
  return (_gradeToExec);
}

void Form::beSigned(const Bureaucrat &obj)
{
  if (obj.getGrade() > _gradeToSign)
    throw Form::GradeTooLowException();
  else
    _signed = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
  return ("Grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
  return ("Grade too low");
}

const char *Form::NotSignedException::what() const throw()
{
  return ("Not signed");
}

std::ostream &operator<<(std::ostream &os, const Form &obj)
{
  os << obj.getName() << ", form grade to sign: " << obj.getGradeToSign()
     << ", form grade to execute: " << obj.getGradeToExecute()
     << ", signed: " << obj.getSigned();
  return (os);
}
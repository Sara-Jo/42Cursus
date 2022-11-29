/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:38:48 by sjo               #+#    #+#             */
/*   Updated: 2022/11/29 13:39:16 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include <string>

class Bureaucrat {
 private:
  const std::string name;
  int grade;

 public:
  Bureaucrat();
  Bureaucrat(const std::string& name, int grade);
  Bureaucrat(const Bureaucrat& obj);
  ~Bureaucrat();
  Bureaucrat& operator=(const Bureaucrat& obj);

  const std::string& getName(void) const;
  int getGrade(void) const;
  void incrementGrade(void);
  void decrementGrade(void);

  std::runtime_error GradeTooHighException();
  std::runtime_error GradeTooLowException();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:49:49 by sjo               #+#    #+#             */
/*   Updated: 2022/11/29 23:51:58 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : Form("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm &obj)
    : Form(obj), _target(obj._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(
    const PresidentialPardonForm &obj)
{
    if (this == &obj)
        return (*this);
    Form::operator=(obj);
    return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    if (!getSigned())
        throw Form::NotSignedException();
    else if (executor.getGrade() > getGradeToExecute())
        throw Form::GradeTooLowException();
    else
    {
        std::cout << executor.getName() << " has been pardoned by Zafod Beeblebrox"
                  << std::endl;
    }
}
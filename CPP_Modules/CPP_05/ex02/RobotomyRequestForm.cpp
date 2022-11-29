/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:49:18 by sjo               #+#    #+#             */
/*   Updated: 2022/11/29 23:51:55 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : Form("RobotomyRequestForm", 72, 45), _target("default") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
    : Form(obj), _target(obj._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(
    const RobotomyRequestForm &obj)
{
    if (this == &obj)
        return (*this);
    Form::operator=(obj);
    return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if (!getSigned())
        throw Form::NotSignedException();
    else if (executor.getGrade() > getGradeToExecute())
        throw Form::GradeTooLowException();
    else
    {
        std::cout << "Drilling noises..." << std::endl;
        srand(time(NULL));
        if (rand() % 2)
            std::cout << _target << " has been robotomized successfully" << std::endl;
        else
            std::cout << "Robotomization of " << _target << " failed" << std::endl;
    }
}
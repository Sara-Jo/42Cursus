/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:49:00 by sjo               #+#    #+#             */
/*   Updated: 2022/11/29 23:33:24 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <cstdlib>
#include <ctime>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    const std::string _target;

public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &obj);
    virtual ~RobotomyRequestForm();

    RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);

    void execute(const Bureaucrat &executor) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:59:15 by sjo               #+#    #+#             */
/*   Updated: 2022/11/30 00:01:49 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    std::cout << "-----Test#0 ShrubberyCreationForm()-----" << std::endl;
    {
        try
        {
            Bureaucrat disable = Bureaucrat("disable", 150);
            Bureaucrat signable = Bureaucrat("signable", 145);
            Bureaucrat executable = Bureaucrat("executable", 137);
            ShrubberyCreationForm form;

            disable.signForm(form);
            disable.executeForm(form);
            std::cout << std::endl;
            signable.signForm(form);
            signable.executeForm(form);
            std::cout << std::endl;
            executable.signForm(form);
            executable.executeForm(form);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << std::endl;

    std::cout << "-----Test#1 RobotomyRequestForm()-----" << std::endl;
    {
        try
        {
            Bureaucrat disable = Bureaucrat("disable", 150);
            Bureaucrat signable = Bureaucrat("signable", 72);
            Bureaucrat executable = Bureaucrat("executable", 45);
            RobotomyRequestForm form;

            disable.signForm(form);
            disable.executeForm(form);
            std::cout << std::endl;
            signable.signForm(form);
            signable.executeForm(form);
            std::cout << std::endl;
            executable.signForm(form);
            executable.executeForm(form);
            std::cout << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << std::endl;

    std::cout << "-----Test#2 PresidentialPardonForm()-----" << std::endl;
    {
        try
        {
            Bureaucrat disable = Bureaucrat("disable", 150);
            Bureaucrat signable = Bureaucrat("signable", 25);
            Bureaucrat executable = Bureaucrat("executable", 5);
            PresidentialPardonForm form;

            disable.signForm(form);
            disable.executeForm(form);
            std::cout << std::endl;
            signable.signForm(form);
            signable.executeForm(form);
            std::cout << std::endl;
            executable.signForm(form);
            executable.executeForm(form);
            std::cout << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << std::endl;
    return 0;
}
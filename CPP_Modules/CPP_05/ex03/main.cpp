/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 01:05:43 by sjo               #+#    #+#             */
/*   Updated: 2022/11/30 14:51:50 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    std::cout << "-----Test#1 Intern::makeForm(): Success-----" << std::endl;
    {
        Intern intern;
        Form *scf;
        Form *rrf;
        Form *ppf;

        scf = intern.makeForm("shrubbery creation", "t1");
        rrf = intern.makeForm("robotomy request", "t2");
        ppf = intern.makeForm("presidential pardon", "t3");

        std::cout << *scf << std::endl;
        std::cout << *rrf << std::endl;
        std::cout << *ppf << std::endl;

        delete scf;
        delete rrf;
        delete ppf;
    }
    std::cout << std::endl;

    std::cout << "-----Test#2 Intern::makeForm(): Failure-----" << std::endl;
    {
        try
        {
            Intern intern;
            Form *nonExistentForm;

            nonExistentForm = intern.makeForm("nonExistentForm", "name");
            std::cout << nonExistentForm << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << std::endl;

    return 0;
}

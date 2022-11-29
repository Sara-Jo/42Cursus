/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 00:43:12 by sjo               #+#    #+#             */
/*   Updated: 2022/11/30 01:27:10 by sjo              ###   ########.fr       */
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

Form *Intern::makeForm(const std::string formName, const std::string target)
{
    std::string types[] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"};

    Form *forms[] = {
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target),
        new ShrubberyCreationForm(target)};

    for (int i = 0; i < 3; i++)
    {
        if (types[i] == formName)
        {
            return (forms[i]);
        }
    }
    throw Intern::UnknownFormException();
    return (NULL);
}

const char *Intern::UnknownFormException::what() const throw()
{
    return ("Intern: Unknown form");
}

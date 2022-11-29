/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 00:43:00 by sjo               #+#    #+#             */
/*   Updated: 2022/11/30 01:26:58 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
public:
    Intern();
    Intern(const Intern &obj);
    ~Intern();

    Intern &operator=(const Intern &obj);

    Form *makeForm(const std::string formName, const std::string target);

    class UnknownFormException : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

#endif
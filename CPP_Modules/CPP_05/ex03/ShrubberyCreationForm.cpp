/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:48:36 by sjo               #+#    #+#             */
/*   Updated: 2022/11/29 23:51:52 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("ShrubberyCreationForm", 145, 137), _target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
    : Form(obj), _target(obj._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(
    const ShrubberyCreationForm &obj)
{
    if (this == &obj)
        return (*this);
    Form::operator=(obj);
    return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    if (!getSigned())
        throw Form::NotSignedException();
    else if (executor.getGrade() > getGradeToExecute())
        throw Form::GradeTooLowException();
    else
    {
        std::ofstream ofs(_target + "_shrubbery");
        ofs << "       _-_" << std::endl;
        ofs << "    /~~   ~~\\" << std::endl;
        ofs << " /~~         ~~\\" << std::endl;
        ofs << "{               }" << std::endl;
        ofs << " \\  _-     -_  /" << std::endl;
        ofs << "   ~  \\\\ //  ~" << std::endl;
        ofs << "_- -   | | _- _" << std::endl;
        ofs << "  _ -  | |   -_" << std::endl;
        ofs << "      // \\\\" << std::endl;
        ofs.close();
    }
}

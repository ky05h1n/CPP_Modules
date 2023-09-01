/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:04:34 by enja              #+#    #+#             */
/*   Updated: 2023/09/01 21:29:14 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreation", 145, 137) , target(target)
{
    this->target = target;
    //std::cout << "PresidentialPardonForm Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm()
{
    //std::cout << "ShrubberyCreationForm Defautl Constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    //std::cout << "ShrubberyCreationForm Destructor" << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : AForm(obj)
{
    *this = obj;
    //std::cout << "ShrubberyCreationForm Copy Constructor" << std::endl;
}

const ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& obj)
{
    if (this != &obj)
        *this = obj;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)const
{
    if (this->getSig() == true && executor.getGrade() <= this->getGradeExecute())
    {
        std::ofstream file(target + "_Shrubbery");
        file <<  "               ,@@@@@@@,\n"
    << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
    << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
    << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
    << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
    << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
    << "   `&%\\ ` /%&'    |.|        \\ '|8'\n"
    << "       |o|        | |         | |\n"
    << "       |.|        | |         | |\n"
    << "___ \\/ .\\_\\/\\_\\/__/  ,\\_\\/\\/__\\\\/.  \\_\\/\\/__/_\n";

    }
    else
        throw AForm::GradeTooLowException();
}
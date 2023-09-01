/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:04:34 by enja              #+#    #+#             */
/*   Updated: 2023/09/01 16:41:55 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

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
    std::cout << "ShrubberyCreationForm Copy Constructor" << std::endl;
}

const ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& obj)
{
    if (this != &obj)
        *this = obj;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
    if (this->getSig() == true && executor.getGrade())
    {
        std::cout << "blabla" << std::endl;
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:03:07 by enja              #+#    #+#             */
/*   Updated: 2023/09/01 16:41:41 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    //std::cout << "RobotomyRequestForm Defautl Constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    //std::cout << "RobotomyRequestForm Destructor" << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : AForm(obj)
{
    *this = obj;
    std::cout << "RobotomyRequestForm Copy Constructor" << std::endl;
}

const RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& obj)
{
    if (this != &obj)
        *this = obj;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)
{
     if (this->getSig() == true && executor.getGrade())
    {
        std::cout << "blabla" << std::endl;
    }
}
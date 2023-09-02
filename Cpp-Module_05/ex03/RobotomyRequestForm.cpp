/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:03:07 by enja              #+#    #+#             */
/*   Updated: 2023/09/02 17:04:36 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequest", 72, 45) , target(target)
{
    
    //std::cout << "PresidentialPardonForm Constructor" << std::endl;
}

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
    //std::cout << "RobotomyRequestForm Copy Constructor" << std::endl;
}

const RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& obj)
{
    if (this != &obj)
        this->target = obj.target;
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)const
{
    if (this->getSig() == true && executor.getGrade() <= this->getGradeExecute())
    {
        static int i = 0;
        if (i % 2 == 0)
        {
            std::cout << target << " Robotomy of " << " has been robotomized successfully 50% of the time" << std::endl;
        }
        else 
        {
            std::cout << target << " the robotomy failed!" << std::endl;
        }
        i++;
    }
    else
        throw AForm::GradeTooLowException();
}
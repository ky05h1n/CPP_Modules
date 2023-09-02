/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:58:17 by enja              #+#    #+#             */
/*   Updated: 2023/09/02 17:04:31 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardon", 25, 5) , target(target)
{
    this->target = target;
    //std::cout << "PresidentialPardonForm Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm()
{
    //std::cout << "PresidentialPardonForm Defautl Constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    //std::cout << "PresidentialPardonForm Destructor" << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : AForm(obj)
{
    *this = obj;
    //std::cout << "PresidentialPardonForm Copy Constructor" << std::endl;
}

const PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& obj)
{
    if (this != &obj)
        this->target = obj.target;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)const
{
    if (this->getSig() == true && executor.getGrade() <= this->getGradeExecute())
    {
       std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
    else
        throw AForm::GradeTooLowException();
}
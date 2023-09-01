/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:58:17 by enja              #+#    #+#             */
/*   Updated: 2023/09/01 16:43:17 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


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
    std::cout << "PresidentialPardonForm Copy Constructor" << std::endl;
}

const PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& obj)
{
    if (this != &obj)
        *this = obj;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
    if (this->getSig() == true && executor.getGrade())
    {
        std::cout << "blabla" << std::endl;
    }
}
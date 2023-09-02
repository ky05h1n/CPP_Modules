/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:30:23 by enja              #+#    #+#             */
/*   Updated: 2023/09/02 21:33:05 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern Defautl Constructor" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern Destructor" << std::endl;
}

Intern::Intern(const Intern& obj)
{
    (void)obj;
    *this = obj;
}
const Intern& Intern::operator = (const Intern& obj)
{
    (void)obj;
    return *this;
}

AForm*    Intern::makeForm(std::string name, std::string target)
{
    std::string names[] = {"shrubbery creation", "robotomy requestForm", "presidential pardonForm", "error"};

    int i = 0;
    while(i < 3 && names[i] != name)
        i++;
    
    switch (i)
    {

        case 0 :
                std::cout << "Intern creates shrubbery creation" << std::endl;
                return new ShrubberyCreationForm(target);
                break;
        case 1 :
                 std::cout << "Intern creates robotomy requestForm" << std::endl;
                 return new RobotomyRequestForm(target);
                 break;
        case 2:
                 std::cout << "Intern creates presidential pardonForm" << std::endl;
                 return new PresidentialPardonForm(target);
                 break;
        default:
                std::cout << "The name provided does not exist" << std::endl;
                throw std::exception();
    }
    return NULL;
}
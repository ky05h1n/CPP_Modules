/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:22:02 by enja              #+#    #+#             */
/*   Updated: 2023/08/28 18:58:05 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat Constructor !" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor !" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
    *this = obj;
}

const Bureaucrat& Bureaucrat::operator = (const Bureaucrat& obj)
{
    if (this != &obj)
        this->grade = obj.grade;
    return *this;
}

int Bureaucrat::getGrade()
{
    return grade;
}

std::string Bureaucrat::getName()
{
    return name;
}

void    Bureaucrat::inGrade()
{
    grade++;
}

void    Bureaucrat::decGrade()
{
    
}
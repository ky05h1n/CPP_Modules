/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ky05h1n <ky05h1n@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:22:02 by enja              #+#    #+#             */
/*   Updated: 2023/08/29 23:14:22 by ky05h1n          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default Bureaucrat Constructor !" << std::endl;
}

Bureaucrat::Bureaucrat(std::string& name, int grade) : name(name)
{
    //std::cout << "Bureaucrat Constructor !" << std::endl;
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
    {
        this->grade = grade;
    }
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
    if (grade > 1)
        grade--;
    else throw GradeTooHighException();
}

void    Bureaucrat::decGrade()
{
    if (grade < 150)
        grade++;
    else throw GradeTooLowException();
}

std::ostream& operator << (std::ostream& out , Bureaucrat& obj)
{
   out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return out;   
}
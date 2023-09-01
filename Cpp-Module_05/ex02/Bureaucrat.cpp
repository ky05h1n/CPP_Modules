/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:22:02 by enja              #+#    #+#             */
/*   Updated: 2023/09/01 20:34:41 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default Bureaucrat Constructor !" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
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
    //std::cout << "Bureaucrat Destructor !" << std::endl;
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

int Bureaucrat::getGrade() const
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

void Bureaucrat::signForm(AForm& form)
{
    if (grade <= form.getGradeExecute() && form.getSig() == true)
        std::cout << name << " signed " << form.getName() << std::endl;
    else
    {
        std::cout << name << " couldn’t sign " << form.getName() << " because the grade does not match the requierment" << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form)
{
    try {
        
        form.execute(*this);
    }
    catch (GradeTooLowException& e)
    {
        std::cout << e.what() << std::endl;
    }
}
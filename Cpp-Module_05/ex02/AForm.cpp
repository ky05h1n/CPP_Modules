/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:50:34 by enja              #+#    #+#             */
/*   Updated: 2023/09/01 16:18:18 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

 AForm::AForm(std::string _name, const int _gradeSign, const int _gradeRequired) : name(_name), gradeSign(_gradeSign), gradeRequired(_gradeRequired)
 {
    this->sig = false;
    if (_gradeRequired < 0 || _gradeSign < 0)
        throw Bureaucrat::GradeTooLowException();
    else if (_gradeRequired > 150 || _gradeSign > 50)
        throw Bureaucrat::GradeTooHighException();
 }

AForm::AForm() : name("Uknown") , gradeSign(0) , gradeRequired(0)
{
    std::cout << "AForm Default Constructor" << std::endl;
}

AForm::~AForm()
{
    //std::cout << "AForm  Destructor " << std::endl;
}

AForm::AForm(const AForm& obj) : name(obj.name), gradeSign(obj.gradeSign), gradeRequired(obj.gradeRequired)
{
    *this = obj;
     //std::cout << "AForm Copy Constructor" << std::endl;
}

const AForm& AForm::operator = (const AForm& obj)
{
    if (this != &obj)
        this->sig = obj.sig;
    return *this;
}

std::string AForm::getName() 
{
    return name;
}

int AForm::getGradeSign() const
{
    return gradeSign;
}

int AForm::getGradeExecute() const
{
    return gradeRequired;
}

std::ostream& operator << (std::ostream& out , AForm& obj)
{
    out << obj.getName() << " " << obj.getSig() << " " << obj.getGradeSign() << " " << obj.getGradeExecute();
    return out;
}

void    AForm::beSigned(Bureaucrat& Bcrat)
{
    if (Bcrat.getGrade() <= gradeRequired)
        sig = true;
    else
        throw AForm::GradeTooLowException();
}

bool AForm::getSig()
{
    return sig;
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Exeception : GradeTooLowException";
}

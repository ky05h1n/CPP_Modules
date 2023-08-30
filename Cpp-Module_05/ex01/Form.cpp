/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:50:34 by enja              #+#    #+#             */
/*   Updated: 2023/08/30 16:54:28 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

 Form::Form(std::string _name, const int _gradeSign, const int _gradeRequired) : name(_name), gradeSign(_gradeSign), gradeRequired(_gradeRequired)
 {
    this->sig = false;
    if (_gradeRequired < 0 || _gradeSign < 0)
        throw GradeTooHighException();
    else if (_gradeRequired > 150 || _gradeSign < 0)
        throw GradeTooHighException();
 }

Form::Form() : name("Uknown") , gradeSign(0) , gradeRequired(0)
{
    std::cout << "Form Default Constructor" << std::endl;
}

Form::~Form()
{
    //std::cout << "Form  Destructor " << std::endl;
}

Form::Form(const Form& obj) : name(obj.name), gradeSign(obj.gradeSign), gradeRequired(obj.gradeRequired)
{
    *this = obj;
}

const Form& Form::operator = (const Form& obj)
{
    if (this != &obj)
        this->sig = obj.sig;
    return *this;
}

std::string Form::getName() 
{
    return name;
}

int Form::getGradeSign() const
{
    return gradeSign;
}

int Form::getGradeExecute() const
{
    return gradeRequired;
}

std::ostream& operator << (std::ostream& out , Form& obj)
{
    out << obj.getName() << " " << obj.getSig() << " " << obj.getGradeSign() << " " << obj.getGradeExecute();
    return out;
}

void    Form::beSigned(Bureaucrat& Bcrat)
{
    if (Bcrat.getGrade() <= gradeRequired)
        sig = true;
    else
        throw GradeTooLowException();
}

bool Form::getSig()
{
    return sig;
}

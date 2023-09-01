/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:50:34 by enja              #+#    #+#             */
/*   Updated: 2023/09/01 16:04:42 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

 Form::Form(std::string _name, const int _gradeSign) : name(_name), gradeSign(_gradeSign), gradeRequired(0)
 {
    this->sig = false;
    if (_gradeSign < 0)
        throw Bureaucrat::GradeTooLowException();
    else if (_gradeSign > 150)
        throw Bureaucrat::GradeTooHighException();
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

std::ostream& operator << (std::ostream& out , Form& obj)
{
    out << obj.getName() << " " << obj.getSig() << " " << obj.getGradeSign();
    return out;
}

void    Form::beSigned(Bureaucrat& Bcrat)
{
    if (Bcrat.getGrade() <= gradeSign)
        sig = true;
    else
        throw Form::GradeTooLowException();
}

bool Form::getSig()
{
    return sig;
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Exeception : GradeTooLowException";
}
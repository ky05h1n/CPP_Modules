/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:39:48 by enja              #+#    #+#             */
/*   Updated: 2023/08/30 16:51:29 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
class Bureaucrat;
class Form {
    
                private:

                        const std::string name;
                        bool              sig;
                        const int         gradeSign;
                        const int         gradeRequired;
                
                public:
                        
                        Form();
                        ~Form();
                        Form(const Form& obj);
                        const Form& operator = (const Form& obj);
                        
                        class GradeTooHighException : public std::exception {};
                        class GradeTooLowException : public std::exception {};
                        Form(std::string name,const int gradeSign, const int gradeRequired);
                        std::string getName();
                        int getGradeSign() const;
                        int getGradeExecute() const;
                        bool      getSig();
                        void      signForm();
                        void      beSigned(Bureaucrat& Bcrat);
};

#include "Bureaucrat.hpp"
std::ostream& operator << (std::ostream& out , Form& obj);
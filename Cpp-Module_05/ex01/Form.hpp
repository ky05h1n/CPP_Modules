/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:39:48 by enja              #+#    #+#             */
/*   Updated: 2023/09/01 16:05:13 by enja             ###   ########.fr       */
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

                        class GradeTooLowException : public std::exception {
                                const char* what() const throw();
                        };
                        
                        Form(std::string _name, const int _gradeSign);
                        std::string getName();
                        int getGradeSign() const;
                        bool      getSig();
                        void      signForm();
                        void      beSigned(Bureaucrat& Bcrat);
};

#include "Bureaucrat.hpp"
std::ostream& operator << (std::ostream& out , Form& obj);
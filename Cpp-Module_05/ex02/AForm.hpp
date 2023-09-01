/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:05:58 by enja              #+#    #+#             */
/*   Updated: 2023/09/01 21:24:12 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <fstream>

class Bureaucrat;
class AForm {
    
                private:

                        const std::string name;
                        bool              sig;
                        const int         gradeSign;
                        const int         gradeRequired;
                
                public:
                        AForm();
                        virtual ~AForm();
                        AForm(const AForm& obj);
                        const AForm& operator = (const AForm& obj);
                        
                        class GradeTooLowException : public std::exception {
                                const char* what() const throw();
                        };
                        
                        AForm(std::string name,const int gradeSign, const int gradeRequired);
                        std::string getName();
                        int getGradeSign() const;
                        int getGradeExecute() const;
                        bool      getSig()const;
                        void      signForm();
                        void      beSigned(Bureaucrat& Bcrat);                       

                        virtual    void execute(Bureaucrat const & executor) const = 0;
};

#include "Bureaucrat.hpp"
std::ostream& operator << (std::ostream& out , AForm& obj);
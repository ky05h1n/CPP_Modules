/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:41:59 by enja              #+#    #+#             */
/*   Updated: 2023/08/30 11:23:59 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

class Bureaucrat{

                private:

                        const std::string name;
                        int               grade;
                        
                public :
                        
                        class GradeTooHighException : public  std::exception{};
                        class GradeTooLowException : public std::exception{};

                        Bureaucrat(std::string name, int grade);
                        Bureaucrat();
                        ~Bureaucrat();
                        Bureaucrat(const Bureaucrat& obj);
                        const Bureaucrat& operator = (const Bureaucrat& obj);
                        std::string getName();
                        int getGrade();
                        void decGrade();
                        void inGrade();
};

std::ostream& operator << (std::ostream& out, Bureaucrat& obj);
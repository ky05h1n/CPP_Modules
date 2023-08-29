/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ky05h1n <ky05h1n@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:41:59 by enja              #+#    #+#             */
/*   Updated: 2023/08/29 23:15:44 by ky05h1n          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

class Bureaucrat{

                private:

                        const std::string& name;
                        int               grade;
                        
                public :
                        
                        class GradeTooHighException : public  std::exception{};
                        class GradeTooLowException : public std::exception{};

                        Bureaucrat(std::string& name, int grade);
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:41:59 by enja              #+#    #+#             */
/*   Updated: 2023/08/28 18:58:24 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

class Bureaucrat{

                private:

                        const std::string name;
                        int               grade;
                        
                public :
                    Bureaucrat();
                    ~Bureaucrat();
                    Bureaucrat(const Bureaucrat& obj);
                    const Bureaucrat& operator = (const Bureaucrat& obj);
                    std::string getName();
                    int getGrade();
                    void decGrade();
                    void inGrade();
};


std::ostream operator << (l::ostream& out, Bureaucrat& obj);
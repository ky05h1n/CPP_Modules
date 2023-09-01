/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:41:50 by enja              #+#    #+#             */
/*   Updated: 2023/09/01 16:18:41 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
     try{

        Bureaucrat obj("Lhaj", 4);
        Form obj1("1337", 10);
        obj.signForm(obj1);
    }
    // try{

    //     Bureaucrat obj("Lhaj", 50);
    //     Form obj1("1337", 1);
    //     obj.signForm(obj1);
    // }
    // try{

    //     Bureaucrat obj("Lhaj", 50);
    //     Form obj1("1337", 50);
    //     obj.signForm(obj1);
    // }
    // try{

    //     Bureaucrat obj("Lhaj", 50);
    //     Form obj1("1337", -150);
    //     obj.signForm(obj1);
    // }
    catch (Bureaucrat::GradeTooHighException& e)
    {
        std::cout << "Exeption: Grade too high" << std::endl;
        return (EXIT_FAILURE);
    }
    catch (Bureaucrat::GradeTooLowException& e)
    {
        std::cout << "Exeption: Grade too low" << std::endl;
        return (EXIT_FAILURE);
    }
}
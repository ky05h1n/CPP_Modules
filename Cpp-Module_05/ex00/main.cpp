/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:41:50 by enja              #+#    #+#             */
/*   Updated: 2023/08/30 11:33:43 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try{

        Bureaucrat obj("Lhaj", 150);
        std::cout << obj << std::endl;
        std::cout << obj.getGrade() << std::endl;
        std::cout << obj.getName() << std::endl;
        obj.inGrade();
        std::cout << obj.getGrade() << std::endl;
        obj.decGrade();
        obj.decGrade();
        obj.decGrade();
    }
    catch (Bureaucrat::GradeTooHighException& e)
    {
        std::cout << "Exeption : Grade too high" << std::endl;
        return (EXIT_FAILURE);
    }
    catch (Bureaucrat::GradeTooLowException& e)
    {
        std::cout << "Exeption : Grade too low" << std::endl;
        return (EXIT_FAILURE);
    }
}
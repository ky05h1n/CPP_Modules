/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:41:50 by enja              #+#    #+#             */
/*   Updated: 2023/09/01 16:53:34 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{

     try{

        // Bureaucrat obj("Lhaj", 4);
        // AForm obj1("1337", 10, 40);
        // obj.signForm(obj1);
    }
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:41:50 by enja              #+#    #+#             */
/*   Updated: 2023/09/01 21:23:47 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{

     try{

        Bureaucrat B("kyoshin",12);
        ShrubberyCreationForm S("test");
        S.beSigned(B);
        B.executeForm(S);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
        return (EXIT_FAILURE);
    }
    // catch (Bureaucrat::GradeTooLowException& e)
    // {
    //     std::cout << "Exeption: Grade too low" << std::endl;
    //     return (EXIT_FAILURE);
    // }
}
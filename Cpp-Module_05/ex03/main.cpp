/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:41:50 by enja              #+#    #+#             */
/*   Updated: 2023/09/02 21:37:08 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{

     try{
        
        Bureaucrat Me("mehdi", 1);
        Intern B;

        AForm *A;

        A = B.makeForm("shrubbery creation", "tffg");
        
        A->beSigned(Me);
        A->execute(Me);
        (void)A;
        
    }
    catch (std::exception & e)
    {
        return 0;
    }
}
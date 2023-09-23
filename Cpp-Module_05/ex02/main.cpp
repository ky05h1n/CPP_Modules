/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:41:50 by enja              #+#    #+#             */
/*   Updated: 2023/09/08 11:39:23 by enja             ###   ########.fr       */
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

        Bureaucrat B("kyoshin",150);
        ShrubberyCreationForm S("test");
        ShrubberyCreationForm S1;

        S1 = S;
        
         //S1.beSigned(B);
         B.signForm(S1);
        // B.executeForm(S1);
        // RobotomyRequestForm R("bot");
        // PresidentialPardonForm  A("AL");
        // AForm *n;
        // (void)n;
        // n  = new ShrubberyCreationForm("omar");
        
        // A.beSigned(B);
        // B.signForm(A);
        // B.executeForm(A);

        // n->beSigned(B);
        // B.signForm(*n);
        // n = new RobotomyRequestForm("lmakina");
        // n->beSigned(B);
        // n->execute(B);
        // n->execute(B);
        // n->execute(B);

        // delete n;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}
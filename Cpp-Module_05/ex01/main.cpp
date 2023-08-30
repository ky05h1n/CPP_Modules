/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:41:50 by enja              #+#    #+#             */
/*   Updated: 2023/08/30 17:00:29 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try{

        Bureaucrat obj("Lhaj", 40);
        
        Form obj1("1337", 50, 40);
        obj1.beSigned(obj);
        obj.signForm(obj1);
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
    catch (Form::GradeTooHighException& e)
    {
        std::cout << "Exeption : Grade too high" << std::endl;
        return (EXIT_FAILURE);
    }
    catch (Form::GradeTooLowException& e)
    {
        std::cout << "Exeption : Grade too low" << std::endl;
        return (EXIT_FAILURE);
    }
}
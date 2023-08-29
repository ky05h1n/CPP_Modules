/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ky05h1n <ky05h1n@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:41:50 by enja              #+#    #+#             */
/*   Updated: 2023/08/29 23:10:54 by ky05h1n          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try{

        Bureaucrat obj("Lhaj", -500);
        std::cout << obj << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException& e)
    {
        std::cout << "Exeption : Grade too high" << std::endl;
        return (EXIT_FAILURE);
    }
    catch (Bureaucrat::GradeTooLowException)
    {
        std::cout << "Exeption : Grade too low" << std::endl;
        return (EXIT_FAILURE);
    }
}
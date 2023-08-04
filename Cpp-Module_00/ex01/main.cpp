/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:03:07 by ky05h1n           #+#    #+#             */
/*   Updated: 2023/08/04 20:29:43 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


int main()
{
    PhoneBook contactobj;
    int i = 0;

    std::string option;
    std::cout << "\033[2J\033[H";
    start();
    while (TRUE)
    {
        std::cout << "select from the options bellow : \n\n  ADD | SEARCH | EXIT" << std::endl;
        std::cout << "->";
        std::getline(std::cin, option);
        if (option == "ADD")
        {
            contactobj.addinfo(i);
            i++;
            if (i == 8)
                i = 0;
        }
        else if (option == "SEARCH")
        {
            if (i >= 1)
            {
                std::cout << "\033[2J\033[H";
                start();
                std::cout << "|\033[1;36m   index    \033[0m|\033[1;36m first name \033[0m|\033[1;36m last name  \033[0m|\033[1;36m nick name  \033[0m|" << std::endl;
                std::cout << "-----------------------------------------------------" << std::endl;
                for (int n = 0 ; n < i; n++)
                    contactobj.showinfo(n);
                std::cout << "\n\n";
            }
            else
            {
                std::cout << "\033[2J\033[H";
                start();
                std::cout << "\033[1;31mWarning : \033[0m";
                std::cout << "there is no contact in the data base" << std::endl << std::endl;
            }
                    
                
        }
        else if (option == "EXIT")
            return (0);
        else
            printerror(option);
    }
}
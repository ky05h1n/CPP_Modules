/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ky05h1n <ky05h1n@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:03:07 by ky05h1n           #+#    #+#             */
/*   Updated: 2023/08/03 21:15:53 by ky05h1n          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


int main()
{
    PhoneBook contactobj;
    int i = 0;

    std::string option;

    std::cout << std::endl;
    std::cout << "     - PHONE BOOK -" << std::endl;
    std::cout << std::endl;
    while (TRUE)
    {
        std::cout << "select from the optins bellow : \n  ADD | SEARCH | EXIT" << std::endl;
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
            for (int i ; i < 8; i++)
                
        }
        else if (option == "EXIT")
            return (0);
        else
            printerror(option);
    }
}
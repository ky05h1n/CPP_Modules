/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:03:07 by ky05h1n           #+#    #+#             */
/*   Updated: 2023/08/11 04:54:30 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    PhoneBook contactobj;
    int signal = 0;
    int i = 0;
    int j = 0;
    int index;

    std::string option;
    std::cout << "\033[2J\033[H";
    start();
    while (TRUE)
    {
        std::cout << "select from the options bellow : \n\n 1.ADD \n 2.SEARCH \n 3.EXIT\n" << std::endl;
        std::cout << "->";
        std::getline(std::cin, option);
        if (option == "1")
        {
            contactobj.addinfo(i);
            i++;
            if (i == 8)
            {
                i = 0;
                j = 8;
            }
            if (j != 8)
                j++;
            signal = 1;
        }
        else if (option == "2")
        {
            if (signal == 1)
                selectcontact(j, contactobj);
            else
            {
                std::cout << "\033[2J\033[H";
                start();
                std::cout << "\033[1;31mWarning : \033[0m";
                std::cout << "there is no contact in the data base" << std::endl
                          << std::endl;
            }
        }
        else if (option == "3")
            return (0);
        else
            printerror1(option);
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:01:40 by ky05h1n           #+#    #+#             */
/*   Updated: 2023/08/11 04:44:07 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string trancword(std::string& input)
{
    std::string newtrunc = input;
    if (input.length() > 10)
    {
        newtrunc = input.substr(0,10);
        newtrunc[9] = '.';
        return (newtrunc);
    }
    int a = input.length();
    if(a < 10)
    {
        a = 10 - a;
        while(a)
        {
            newtrunc += ' ';
            a--;
        }
        return newtrunc;
    }
    return(input);
}

void start(void)
{
    std::cout << std::endl;
    std::cout << "\033[1;32m       - PHONE BOOK -\033[0m" << std::endl;
    std::cout << std::endl;
}


void Contact::storinfo(void)
{
    std::cout << "\nadd  your first name : ";
    std::getline(std::cin, first_name);
    first_name = trancword(first_name);

    std::cout << "\nadd  your last name : ";
    std::getline(std::cin, last_name);
     last_name = trancword(last_name);

    std::cout << "\nadd your nick name : ";
    std::getline(std::cin, nick_name);
     nick_name = trancword(nick_name);

    std::cout << "\nadd your phone number : ";
    std::getline(std::cin, phone_number);

    std::cout << "\nadd your darkest secret : ";
    std::getline(std::cin, darkest_secret);

    std::cout << "\033[2J\033[H";
    start();
    std::cout << "\033[1;36mContact Added !\033[0m" << std::endl;
    std::cout << std::endl;
}

void PhoneBook::addinfo(int i)
{
    mydata[i].storinfo();
}

void PhoneBook::showinfo(int n) 
{
    mydata[n].printinfo(n);
}

void PhoneBook::displaycontact(int index)
{
    mydata[index].showcontact();
}

void Contact::printinfo(int n)
{
    std::cout << "|      " << n << "     | " << first_name << " | " << last_name << " | " << nick_name << " |" << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;
} 

void printerror1(std::string option)
{
        std::cout << "\033[2J\033[H";
        start();
        std::cout << "\033[1;31mWarning : \033[0m";
        std::cout <<  "no option found for ";
        std::cout << "\"" << option << "\"" << std::endl;
        std::cout << std::endl;
}

void printerror2(void)
{
        std::cout << "\033[2J\033[H";
        start();
        std::cout << "\033[1;31mWarning : \033[0m";
        std::cout <<  "Out of index range !\n";
        std::cout << std::endl;
        
}

void selectcontact(int j, PhoneBook phbk)
{
    int index;
    std::string opt;
    while (TRUE)
    {
        searchoption(1);
        for (int n = 0; n < j; n++)
            phbk.showinfo(n);
         std::cout << "\n\n";
         std::cout << "\nTo show more info about a specific contact please chose by index\n->";
         std::cin >> index;
         while (index > j - 1)
         {
            printerror2();
            searchoption(0);
            for (int n = 0; n < j; n++)
                phbk.showinfo(n);
            std::cout << "\n\n";
            std::cout << "\nTo show more info about a specific contact please chose by index\n->";
            std::cin >> index;
         }
             while (TRUE)
             {
                searchoption(1);
                for (int n = 0; n < j; n++)
                    phbk.showinfo(n);
                std::cout << "\n\033[1;36mContact number \033[0m" << index << "\033[1;36m selected !\n\n\033[0m";
                phbk.displaycontact(index);
                std::cout << "to select another contact please chose 1 or 0 to get back to the main menu\n->";
                std::getline(std::cin , opt);
                if (opt == "0")
                {   
                    std::cout << "\033[2J\033[H";
                    start();
                    return;
                }
                else if (opt == "1")
                    break;
             }
    }
}

void searchoption(int n)
{
    if (n == 1)
        std::cout << "\033[2J\033[H";
    if (n == 1)
        start();
    std::cout << "|\033[1;36m   index    \033[0m|\033[1;36m first name \033[0m|\033[1;36m last name  \033[0m|\033[1;36m nick name  \033[0m|" << std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;
}

void    Contact::showcontact(void)
{
    std::cout << "  first name : " << first_name << std::endl;
    std::cout << "  last name : " << last_name << std::endl;
    std::cout << "  nick name : " << nick_name << std::endl;
    std::cout << "  phone number : " << phone_number << std::endl;
    std::cout << "  darkest secret : " << darkest_secret << std::endl;
    std::cout << std::endl;
}

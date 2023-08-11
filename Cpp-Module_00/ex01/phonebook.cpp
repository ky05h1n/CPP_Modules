/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:01:40 by ky05h1n           #+#    #+#             */
/*   Updated: 2023/08/11 08:11:52 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int checkstring(const char *str)
{
    for (int i = 0; str[i]; i++)
        if (iswalpha(str[i]))
            return 0;
    return 1;
}

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
    addmsg();
    while (TRUE)
    {
        std::cout << "\nadd  your first name : ";
        std::getline(std::cin, first_name);
        if (first_name.empty() || checkstring(first_name.c_str()))
        {
            addmsgerror();
            continue;
        }
        first_name = trancword(first_name);
        break;
    }
    addmsg();
    while (TRUE)
    {
        std::cout << "\nadd  your last name : ";
        std::getline(std::cin, last_name);
        if (last_name.empty() || checkstring(last_name.c_str()))
        {
            addmsgerror();
            continue;
        }
        last_name = trancword(last_name);
        break;
    }
    addmsg();
    while (TRUE)
    {

        std::cout << "\nadd your nick name : ";
        std::getline(std::cin, nick_name);
        if (nick_name.empty() || checkstring(nick_name.c_str()))
        {
            addmsgerror();
            continue;
        }
        nick_name = trancword(nick_name);
        break;
    }
    addmsg();
    while (TRUE)
    {
        std::cout << "\nadd your phone number : ";
        std::getline(std::cin, phone_number);
        if (phone_number.empty() || checkstring(phone_number.c_str()))
        {
            addmsgerror();
            continue;
        }
        break;
    }
    addmsg();
    while (TRUE)
    {
        std::cout << "\nadd your darkest secret : ";
        std::getline(std::cin, darkest_secret);    
        if (darkest_secret.empty() || checkstring(darkest_secret.c_str()))
        {
            addmsgerror();
            continue;
        } 
        break;
    }

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
        std::cout <<  "Wrong input or Out of index range !\n";
        std::cout << std::endl;
        
}

void selectcontact(int j, PhoneBook phbk)
{
    std::string index;
    int         my_index;
    std::string opt;
    while (TRUE)
    {
        searchoption(1);
        for (int n = 0; n < j; n++)
            phbk.showinfo(n);
         std::cout << "\n\n";
         std::cout << "\nTo show more info about a specific contact please chose by index\n->";
         std::getline(std::cin,index);
         while (index.size() != 1 || !std::isdigit(index[0]) || std::atoi(index.c_str()) > j-1)
         {
            printerror2();
            searchoption(0);
            for (int n = 0; n < j; n++)
                phbk.showinfo(n);
            std::cout << "\n\n";
            std::cout << "\nTo show more info about a specific contact please chose by index\n->";
            std::getline(std::cin,index);
         }
         my_index = std::atoi(index.c_str());
            while (TRUE)
             {
                searchoption(1);
                for (int n = 0; n < j; n++)
                    phbk.showinfo(n);
                std::cout << "\n\033[1;36mContact number \033[0m" << index << "\033[1;36m selected !\n\n\033[0m";
                phbk.displaycontact(my_index);
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

void addmsgerror(void)
{
     std::cout << "\033[2J\033[H";
     start();
     std::cout << "\033[1;31mWarning : \033[0m";
     std::cout <<  "every section should be filled";
     std::cout << std::endl;
}

void addmsg(void)
{
    std::cout << "\033[2J\033[H";
    start();
    std::cout << "- \033[1;36mPlease enter ur informations and make sure to fill all the sections !\033[0m\n";
}
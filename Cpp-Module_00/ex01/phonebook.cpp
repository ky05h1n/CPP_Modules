/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ky05h1n <ky05h1n@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:01:40 by ky05h1n           #+#    #+#             */
/*   Updated: 2023/08/03 21:36:32 by ky05h1n          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void Contact::storinfo(void)
{
    std::cout << "add  your first name :" << std::endl;
    std::getline(std::cin, first_name);

    std::cout << "add your nick name :" << std::endl;
    std::getline(std::cin, first_name);

    std::cout << "add your phone number :" << std::endl;
    std::getline(std::cin, phone_number);

    std::cout << "add your darkest secret :" << std::endl;
    std::getline(std::cin, first_name);
}

void PhoneBook::addinfo(int i)
{
    mydata[i].storinfo();
}

void PhoneBook::showinfo(int i)
{
    mydata[i].printinfo();
}

void Contact::printinfo(void)
{
    std::cout << "index | "
}

void printerror(std::string option)
{
        std::cout << "no option found for";
        std::cout << option << std::endl;
        std::cout << std::endl;
}
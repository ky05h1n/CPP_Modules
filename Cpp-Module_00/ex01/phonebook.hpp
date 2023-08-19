/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:32:04 by ky05h1n           #+#    #+#             */
/*   Updated: 2023/08/17 11:18:06 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H


#include <iostream>


#define TRUE 1

class Contact {

        private :

                std::string first_name;
                std::string last_name;
                std::string nick_name;
                std::string phone_number;
                std::string darkest_secret;

        public :
                void storinfo(void);
                void printinfo(int n);
                void showcontact(void);
                
                
           
};

class PhoneBook{

        private :

                Contact mydata[8];
        public :
                
                void addinfo(int i);
                void showinfo(int n);
                void displaycontact(int n);

};

void printerror1(std::string option);
void printerror2(void);
void selectcontact(int j, PhoneBook phbk);
void searchoption(int n);
int checkstring(char *str);
void addmsgerror(int sig);
void addmsg(void);
std::string trancword(std::string& input);
void start(void);


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 03:53:45 by enja              #+#    #+#             */
/*   Updated: 2023/08/14 06:35:04 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


 void Harl::debug( void )
 {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
 }

 
 void Harl::info(void)
 {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
 }
 

 void Harl::warning(void)
 {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
 }

 
 void Harl::error( void )
 {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
 }

 void    Harl::complain(std::string level)
 {
      int i = 0;
      std::string arr[] = {"DEBUG", "INFO", "WARNING"};

      while (level != arr[i])
         i++;

      switch (i)
      {
         case 0:
                  PtrTofonc = &Harl::debug;
            break;

         case 1:
                  PtrTofonc = &Harl::info;
            break;

         case 2:
                  PtrTofonc = &Harl::warning;
             break;

         default :
                  PtrTofonc = &Harl::error;
      }
      (this->*PtrTofonc)();
 }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 00:22:37 by enja              #+#    #+#             */
/*   Updated: 2023/08/17 00:40:23 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
        
    std::string *stringPTR = &string;

    std::string &stringREF = string;
  

  
    std::cout << string << std::endl;


        
    }   
}
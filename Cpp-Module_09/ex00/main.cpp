/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:05:28 by enja              #+#    #+#             */
/*   Updated: 2023/10/10 17:35:09 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac , char **av)
{
    (void)av;
    if (ac == 2)
    {
        try{
             BitcoinExchange obj;
             obj.ParsInput(++av);
        }        
        catch(std::exception &e)
        {
            std::cout << "\n    Error => the program will exit directly when :\n\n\t-restricted permission is found \n \t-empty or unexisted file \n \t-corrupted data" << std::endl;
            std::cout << "\n    Usage : ./btc \"file_name.csv\"\n" << std::endl;
        }
    }
    else
    {
        std::cout << "\n    Error => the program will exit directly when :\n\n\t-restricted permission is found \n \t-empty or unexisted file \n \t-corrupted data\n" << std::endl;        
        std::cout << "    Usage : ./btc \"file_name.csv\"\n" << std::endl;
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:01:06 by enja              #+#    #+#             */
/*   Updated: 2023/09/04 16:23:09 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    (void)av;
    if (ac != 2)
    {
        std::cout << "No or many Argumet" << std::endl;
        std::cout << "Usage : ./conver [literal]" << std::endl;
        return(EXIT_FAILURE);
    }
    
    ScalarConverter obj;
    std::string convert = av[1];
    obj.convert(convert);
    
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 03:56:34 by enja              #+#    #+#             */
/*   Updated: 2023/10/06 10:06:19 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac > 1)
    {
        try{
            Rpn obj(++av);
                try{
                        obj.RpnCalculation();
                        }
                        catch (...)
                        {
                            std::cout << "Error" << std::endl;
                            }
        }
        catch (...)
        {
            std::cout << "Error" << std::endl;
        }
    }
    else
        std::cout << "usage : \n ./RPN \"[operands] [operators]\"\n\n example : ./RPN \"7 7 * 7 -\"\n";
}
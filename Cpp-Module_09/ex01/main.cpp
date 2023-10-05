/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 03:56:34 by enja              #+#    #+#             */
/*   Updated: 2023/10/05 04:56:45 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    (void)av;
    (void)ac;
    if (ac == 2)
    {
        try{
                Rpn obj(++av);
                std::cout << obj.GetRpn() << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << "parse error" << std::endl;
        }
    }
    else
        std::cout << "usage : \n ./RPN \"[operands] [operators]\"\n\n example : ./RPN \"7 7 * 7 -\"\n";
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:01:04 by enja              #+#    #+#             */
/*   Updated: 2023/10/06 08:51:03 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac , char **av)
{
    if (ac > 1)
    {
        try{
            PmergeMe obj(++av);
            
        }
        catch (std::exception &e)
        {
            std::cout << "Exception : Error !" << std::endl;
        }
    }
    else
        std::cout << "\nUsage : ./PmergeMe [sequance of positive numbers]\n\n   exaple : ./PmergeMe 42 13 37\n" << std::endl;
}
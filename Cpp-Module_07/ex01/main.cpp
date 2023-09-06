/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:56:56 by enja              #+#    #+#             */
/*   Updated: 2023/09/06 17:06:49 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    
    int arr[] = {1 , 2 , 3, 4};
    ::iter(arr,4, func);
    std::cout << "\n\n";
     
    char ptr[] = {'a', 'b', 'c'};
    ::iter(ptr,3, func);
    std::cout << "\n\n";
    
    std::string array[] = {"42 ", "1337  ", "it ", "is ", "what ", "it ", "is"};
    ::iter(array,7, func);
}
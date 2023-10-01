/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:24:27 by enja              #+#    #+#             */
/*   Updated: 2023/10/01 11:32:51 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> a;

    for(int i = 0; i <= 10; i++)
        a.push_back(i);


    std::cout << easyfind(a, 4) << std::endl;
    
    std::cout << easyfind(a, -1) << std::endl;

    std::cout << easyfind(a, 100) << std::endl;

    std::cout << easyfind(a, 10) << std::endl;
}
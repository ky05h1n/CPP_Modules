/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ky05h1n <ky05h1n@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:13:50 by ky05h1n           #+#    #+#             */
/*   Updated: 2023/07/29 17:18:14 by ky05h1n          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

int main(int ac, char **av)
{
        if (ac >= 2)
        {
                for (int i = 1; av[i]; i++)
                        for (int n = 0; av[i][n]; n++)
                            std::cout << (char)toupper(av[i][n]);
                std::cout << std::endl;
        }
        else
            std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
}
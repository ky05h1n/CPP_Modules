/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:35:00 by enja              #+#    #+#             */
/*   Updated: 2023/09/06 17:06:18 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

template<typename T>

void    func(T arr)
{
    std::cout << arr;
}

template<typename T>

void iter(T* ptr,  int size, void (*func)(T&))
{
    for (int i = 0; i < size; i++)
        func(ptr[i]);
}
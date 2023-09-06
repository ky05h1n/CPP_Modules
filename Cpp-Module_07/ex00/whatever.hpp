/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:15:38 by enja              #+#    #+#             */
/*   Updated: 2023/09/06 16:45:50 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>

void swap(T& a , T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}


template<typename T>
T   max(T& a, T& b)
{
    return (a > b) ? a : b;
}

template<typename T>
T    min(T& a, T& b)
{
        return(a < b) ?  a : b;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:46:05 by enja              #+#    #+#             */
/*   Updated: 2023/10/01 11:57:23 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span(unsigned int n)
{
    std::cout << "Constructor" << std::endl;
    vec.push_back(n);
}

Span::Span()
{
    std::cout << "Defualt Constructor" << std::endl;
}

Span::~Span()
{
    std::cout << "Destructor" << std::endl;
}

Span::Span(const Span& obj)
{
    *this = obj;
}

const Span& Span::operator = (const Span& obj)
{
    int size = obj.vec.size();
    for(int i = 0; i < size; i++)
    {
        this->vec.push_back(obj.vec[i]);
    }
    return *this;
}

void    Span::addNumber(unsigned int n)
{
    vec.push_back(n);
}
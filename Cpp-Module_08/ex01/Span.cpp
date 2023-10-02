/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:46:05 by enja              #+#    #+#             */
/*   Updated: 2023/10/02 10:14:50 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span(unsigned int n)
{
    std::cout << "Constructor" << std::endl;
    size = n;
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

void    Span::addNumber(int n)
{
    if (vec.size() < size)
        vec.push_back(n);
    else
        throw FilledException();
}

int    Span::shortestSpan()
{
    if (vec.size() <= 1)
        throw NoSpanException();
    
    int span;
    int min = MAX_INT;
    sort(vec.begin(), vec.end());

    for (int i = 1; i < (int)vec.size(); i++)
    {
        span = vec[i] - vec[i - 1];
        if (span < min)
            min = span;
    }
    return min;
}

int    Span::longestSpan()
{
    if (vec.size() <= 1)
        throw NoSpanException();
    sort(vec.begin(), vec.end());
    int min = 0;

    for(int i = 1; i < (int)vec.size(); i++)
    {
        int span = vec[i] - vec[0];
        if (span > min)
            min = span;
    }
    return min;
}

const char * Span::FilledException::what() const throw()
{
    return "Exception: Container Size exceeded";
}

const char * Span::NoSpanException::what() const throw()
{
    return "Exception: No span can be found";
}

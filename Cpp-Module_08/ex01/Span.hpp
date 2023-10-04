/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:38:29 by enja              #+#    #+#             */
/*   Updated: 2023/10/04 04:06:21 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <vector>

#define MAX_INT 2147483647

class Span{
    
            private:
                    
                    std::vector<int> vec;
                    unsigned int size;
                
            public :
            
                    Span();
                    ~Span();
                    Span(const Span& obj);
                    const Span& operator = (const Span& obj);
                    
                    Span(unsigned int n);
                    class FilledException : public std::exception{
                         const char* what() const throw();
                    };
                    class NoSpanException : public std::exception{
                         const char* what() const throw();
                    };
                    void	     addNumber(int n);
                    void	     addMultiNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end, std::vector<int> c);
                    int		shortestSpan();
                    int		longestSpan();
};
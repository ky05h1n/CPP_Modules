/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:38:29 by enja              #+#    #+#             */
/*   Updated: 2023/10/01 12:00:49 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>

class Span{
                private:
                            std::vector<unsigned int> vec;
                
                public :
                            Span();
                            ~Span();
                            Span(const Span& obj);
                            const Span& operator = (const Span& obj);
                            
                            Span(unsigned int n);
                            void    addNumber(unsigned int n);
                            std::vector<unsigned int> getvec(void)
                            {
                                return vec;
                            }
                            
};
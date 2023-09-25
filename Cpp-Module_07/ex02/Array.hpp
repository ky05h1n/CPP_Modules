/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:13:11 by enja              #+#    #+#             */
/*   Updated: 2023/09/08 13:55:13 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<class T>
class Array{
                
                private:
                        
                        unsigned int len;
                        T *Arrtype;
                public :

                    Array();
                    ~Array();
                    Array(const Array& obj);
                    const Array& operator = (const Array& obj);
                
                    Array(unsigned int n);
                    size();
};
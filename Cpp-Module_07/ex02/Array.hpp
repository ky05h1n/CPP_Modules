/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:13:11 by enja              #+#    #+#             */
/*   Updated: 2023/10/04 03:39:33 by enja             ###   ########.fr       */
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

                        Array()
                        {
                                len = 0;
                                Arrtype = new T[0]();
                                std::cout << "Array Constructor" << std::endl;
                        }
      
                        ~Array()
                        {
                                delete [] Arrtype;
                                std::cout << "Array Destructor" << std::endl;
                        }

                        Array(const Array& obj)
                        {
                                *this = obj;
                        }

                        const Array<T>& operator = (const Array& obj)
                        {
                                this->len = obj.len;
                                this->Arrtype = new T[obj.len]();
                                for(int i = 0; i < int(obj.len); i++)
                                        this->Arrtype[i] = obj.Arrtype[i];
                                return *this;
                        }

                        Array(unsigned int n)
                        {
                                len = n;
                                Arrtype = new T[n]();
                                std::cout << "Array Constructor" << std::endl;
                        }

                        T& operator [](int n)
                        {
                                if (n >= 0 && n < (int)len)
                                        return Arrtype[n];
                                throw std::out_of_range("out of bound range");
                        }

                        int size()
                        {
                                return len;
                        }

};
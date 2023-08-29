 Animal(obj)
{/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ky05h1n <ky05h1n@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:29:24 by ky05h1n           #+#    #+#             */
/*   Updated: 2023/08/19 12:08:16 by ky05h1n          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <cmath>
class Fixed
{
                private:

                        int                 fixp;
                        static const int    frac = 8;
    
                public:
                
                        Fixed();
                        Fixed(const int var);
                        Fixed(const Fixed& obj);
                        Fixed(const float fval);
                        Fixed&  operator=(const Fixed& obj);
                        ~Fixed();
                        int getRawBits(void) const;
                        void setRawBits( int const raw );
                        float toFloat(void)const;
                        int toInt(void)const;

                        
};

std::ostream& operator<<(std::ostream& out , const Fixed& obj);
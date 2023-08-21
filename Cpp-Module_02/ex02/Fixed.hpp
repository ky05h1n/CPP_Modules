/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ky05h1n <ky05h1n@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:29:24 by ky05h1n           #+#    #+#             */
/*   Updated: 2023/08/21 16:03:13 by ky05h1n          ###   ########.fr       */
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
                        Fixed&  operator = (const Fixed& obj);
                        ~Fixed();

                        int getRawBits(void) const;
                        void setRawBits( int const raw );
                        float toFloat(void)const;
                        int toInt(void)const;

                        Fixed operator ++ ();
                        Fixed operator ++ (int);
                        Fixed operator -- ();
                        Fixed operator -- (int);
                        Fixed operator + (Fixed var);
                        Fixed operator - (Fixed var);
                        Fixed operator * (Fixed var);
                        Fixed operator / (Fixed var);
                        bool operator > (Fixed var);
                        bool operator < (Fixed var);
                        bool operator == (Fixed var);
                        bool operator != (Fixed var);
                        bool operator >= (Fixed var);
                        bool operator <= (Fixed var);
     
                        static Fixed& min(Fixed& num1, Fixed& num2);
                        static const Fixed&  min(const Fixed& num1, const Fixed& num2);
                        static Fixed& max(Fixed& num1, Fixed& num2);
                        static const Fixed& max(const Fixed& num1, const Fixed& num2);
};


std::ostream& operator<<(std::ostream& out , const Fixed& obj);

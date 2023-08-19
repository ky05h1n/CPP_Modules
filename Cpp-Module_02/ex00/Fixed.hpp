/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ky05h1n <ky05h1n@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:29:24 by ky05h1n           #+#    #+#             */
/*   Updated: 2023/08/18 16:30:39 by ky05h1n          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

class Fixed
{
                private:

                        int                 fixp;
                        static const int    frac = 8;
    
                public:
                
                        Fixed();
                        Fixed(const Fixed& obj);
                        Fixed&  operator=(const Fixed& obj);
                        ~Fixed();
                        int getRawBits(void) const;
                        void setRawBits( int const raw );
};
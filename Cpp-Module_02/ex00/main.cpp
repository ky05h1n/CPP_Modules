/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ky05h1n <ky05h1n@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:20:27 by ky05h1n           #+#    #+#             */
/*   Updated: 2023/08/18 16:39:00 by ky05h1n          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int     main( void ) {
    
        Fixed a;
        Fixed b( a );
        Fixed c;
        c = b;
        std::cout << a.getRawBits() << std::endl;
        std::cout << b.getRawBits() << std::endl;
        std::cout << c.getRawBits() << std::endl;
        return 0;
}

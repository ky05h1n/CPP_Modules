#include "Fixed.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ky05h1n <ky05h1n@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:35:33 by ky05h1n           #+#    #+#             */
/*   Updated: 2023/08/18 15:35:54 by ky05h1n          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed()
{
    fixp = 0;
    std::cout << "Default Constructor Called !" << std::endl;
}

 Fixed::~Fixed()
 {
    std::cout << "Destructor Called !" << std::endl;
 }

Fixed::Fixed(const Fixed& obj)
{
    this->fixp = obj.fixp;
    std::cout << "Copy Constructor Called !" << std::endl;
}

Fixed&  Fixed::operator=(const Fixed& obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->fixp = obj.fixp;
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return fixp;
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixp = raw;
}
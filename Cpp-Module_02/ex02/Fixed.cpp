/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ky05h1n <ky05h1n@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:35:33 by ky05h1n           #+#    #+#             */
/*   Updated: 2023/08/21 16:47:46 by ky05h1n          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed()
{
    fixp = 0;
    //std::cout << "Default Constructor Called !" << std::endl;
}

 Fixed::~Fixed()
 {
    //std::cout << "Destructor Called !" << std::endl;
 }

Fixed::Fixed(const Fixed& obj)
{
    this->fixp = obj.fixp;
    //std::cout << "Copy Constructor Called !" << std::endl;
}

Fixed&  Fixed::operator=(const Fixed& obj)
{
   // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->fixp = obj.fixp;
    return *this;
}

int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return fixp;
}

void    Fixed::setRawBits(int const raw)
{
   // std::cout << "setRawBits member function called" << std::endl;
    this->fixp = raw;
}

Fixed::Fixed(const int var)
{
    //std::cout <<"Int constructor called"<< '\n';
    this->fixp = var << frac;
}

Fixed::Fixed(const float fval)
{
    //std::cout << "Float constructor called" << '\n';
    this->fixp = int(roundf(fval * (1 << frac)));
}
float Fixed::toFloat() const
{
    return float(fixp) / (1 << frac);
}

int Fixed::toInt() const 
{
    return fixp >> frac;
}

std::ostream& operator<<(std::ostream& out , const Fixed& obj)
{
    out << obj.toFloat();
    return out;
}

Fixed Fixed::operator++ ()
{
    fixp++;
    return *this;
}

Fixed Fixed::operator ++ (int)
{
    Fixed tmp = *this;
    ++*this;
    return tmp;
}

Fixed Fixed::operator -- ()
{
    fixp--;
    return Fixed(fixp);
}

Fixed Fixed::operator -- (int)
{
    --fixp;
    return Fixed(fixp);
}

Fixed Fixed::operator + (Fixed var)
{
    return (Fixed(fixp + var.fixp));
}

Fixed Fixed::operator - (Fixed var)
{
    return (Fixed(fixp - var.fixp));
}

Fixed Fixed::operator * (Fixed var)
{
    Fixed ret;
    ret.setRawBits(this->fixp * var.fixp >> frac);
    return ret;
}

Fixed Fixed::operator / (Fixed var)
{
    return (Fixed(fixp / var.fixp));
}

bool Fixed::operator > (Fixed var)
{
    if (fixp > var.fixp)
        return true;
    return false;
}

bool Fixed::operator < (Fixed var)
{
    if (fixp < var.fixp)
        return true;
    return false;
}

bool Fixed::operator >= (Fixed var)
{
    if (fixp >= var.fixp)
        return true;
    return false;
}

bool Fixed::operator <= (Fixed var)
{
    if (fixp <= var.fixp)
        return true;
    return false;
}

bool Fixed::operator == (Fixed var)
{
    if (fixp == var.fixp)
        return true;
    return false;
}


bool Fixed::operator != (Fixed var)
{
    if (fixp != var.fixp)
        return true;
    return false;
}

Fixed&  Fixed::min(Fixed& num1, Fixed& num2)
{
        if (num1 > num2)
                return num2;
        return num1;
}

const Fixed&  Fixed::min(const Fixed& num1, const Fixed& num2)
{
        if (num1.fixp > num2.fixp)
                return num2;
        return num1;
}

Fixed&  Fixed::max(Fixed& num1, Fixed& num2)
{
        if (num1 < num2)
                return num2;
        return num1;
}

const Fixed&  Fixed::max(const Fixed& num1, const Fixed& num2)
{
        if (num1.fixp < num2.fixp)
                return num2;
        return num1;
}
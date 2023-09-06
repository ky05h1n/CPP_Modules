/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:54:58 by enja              #+#    #+#             */
/*   Updated: 2023/09/04 17:08:50 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter default constructor" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter destructor" << std::endl;    
}

ScalarConverter::ScalarConverter(const ScalarConverter& obj)
{
    (void)obj;
    *this = obj;
}

ScalarConverter& ScalarConverter::operator = (const ScalarConverter& obj)
{
    (void)obj;
    return *this;
}

void    ScalarConverter::convert(std::string convert)
{
    (void)convert;
    // if (convert.find_last_not_of(convert.size()))
    std::cout << convert[convert.find_last_not_of(convert.size())] << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:24:43 by enja              #+#    #+#             */
/*   Updated: 2023/08/25 21:28:01 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria Destructor egaged !" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor engaged !" << std::endl; 
}

AMateria::AMateria(const AMateria& obj)
{
    *this = obj;
    std::cout << "AMateria Copy Constructor engaged !" << std::endl;
}

const AMateria& AMateria::operator=(const AMateria& obj)
{
    if (this != &obj)
        this->type = obj.type;
    return *this;
}
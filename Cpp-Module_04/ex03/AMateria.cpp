/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:24:43 by enja              #+#    #+#             */
/*   Updated: 2023/08/26 21:02:13 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria Constructor egaged !" << std::endl;
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

AMateria::AMateria(std::string const &_type):type(_type)
{
    
}

std::string const &AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter &target)
{
    (void)target;
    std::cout << "amateria default base" << std::endl;
}

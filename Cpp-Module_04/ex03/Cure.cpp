/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:45:22 by enja              #+#    #+#             */
/*   Updated: 2023/08/25 21:45:03 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure()
{
    std::cout << "Cure Destructor egaged !" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure Destructor engaged !" << std::endl; 
}

Cure::Cure(const Cure& obj)
{
    std::cout << "Cure Copy Constructor engaged !" << std::endl;
    *this = obj;
}

const Cure& Cure::operator=(const Cure& obj)
{
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

void Cure::use(ICharacter& target)
{
    std::cout << "heals " << type << " ’s wounds" << std::endl;
}
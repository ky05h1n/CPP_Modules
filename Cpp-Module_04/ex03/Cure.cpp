/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:45:22 by enja              #+#    #+#             */
/*   Updated: 2023/08/26 21:34:43 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure():AMateria("cure")
{
    type = "cure";
    std::cout << "Cure Constructor egaged !" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure Destructor engaged !" << std::endl; 
}

Cure::Cure(const Cure& obj):AMateria(obj)
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
    std::cout << "* heals " << target.getName() << " ’s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
    return new Cure();
}
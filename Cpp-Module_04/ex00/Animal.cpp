/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:37:35 by enja              #+#    #+#             */
/*   Updated: 2023/08/25 18:04:50 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Consutructor engaged !" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor engaged !" << std::endl;
}

Animal::Animal(const Animal& obj)
{
    std::cout << "Animal Copy Constructor engaged " << std::endl;
    *this = obj;
}

Animal& Animal::operator = (const Animal& obj)
{
    if (this != &obj)
            this->type = obj.type;
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "this is virtual" << std::endl;
}
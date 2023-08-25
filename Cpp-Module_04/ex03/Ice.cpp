/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:21:17 by enja              #+#    #+#             */
/*   Updated: 2023/08/25 21:45:11 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    std::cout << "Ice Destructor egaged !" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice Destructor engaged !" << std::endl; 
}

Ice::Ice(const Ice& obj)
{
    *this = obj;
    std::cout << "Ice Copy Constructor engaged !" << std::endl;
}

const Ice& Ice::operator=(const Ice& obj)
{
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

void Ice::use(ICharacter& target)
{
    std::cout << "shoots an ice bolt at " << name << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:52:58 by enja              #+#    #+#             */
/*   Updated: 2023/08/24 12:13:50 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Consutructor engaged !" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor engaged !" << std::endl;
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
    this->type = obj.type;
}

Dog& Dog::operator = (const Dog& obj)
{
    if (this != &obj)
            this->type = obj.type;
    return *this;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:52:58 by enja              #+#    #+#             */
/*   Updated: 2023/08/25 18:08:54 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Consutructor engaged !" << std::endl;
    type = "Dog";
    ptr = new Brain();
}

Dog::~Dog()
{
    delete ptr;
    std::cout << "Dog Destructor engaged !" << std::endl;
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
    std::cout << "Dog Copy Constructor engaged !" << std::endl;
    *this = obj;
}

Dog& Dog::operator = (const Dog& obj)
{
    if (this != &obj)
            this->type = obj.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Hw Hw !" << std::endl;
}

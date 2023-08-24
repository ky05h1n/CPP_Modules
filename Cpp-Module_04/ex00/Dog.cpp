/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ky05h1n <ky05h1n@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:52:58 by enja              #+#    #+#             */
/*   Updated: 2023/08/24 20:34:42 by ky05h1n          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Consutructor engaged !" << std::endl;
    type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog Destructor engaged !" << std::endl;
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
    std::cout << "Dog Copy Constructor engaged !" << std::endl;
    this->type = obj.type;
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

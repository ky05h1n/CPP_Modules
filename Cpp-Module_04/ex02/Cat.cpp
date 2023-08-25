/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:50:23 by enja              #+#    #+#             */
/*   Updated: 2023/08/25 18:11:01 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat Default Consutructor engaged !" << std::endl;
    ptr = new Brain();
}

Cat::~Cat()
{
    delete ptr;
    std::cout << "Cat Destructor engaged !" << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
    *this = obj;
    std::cout << "Cat Copy Constructor engaged !" << std::endl;
}

Cat& Cat::operator = (const Cat& obj)
{
    if (this != &obj)
            this->type = obj.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout  << "mew" << std::endl;
}

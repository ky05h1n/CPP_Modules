/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ky05h1n <ky05h1n@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:50:23 by enja              #+#    #+#             */
/*   Updated: 2023/08/24 20:34:52 by ky05h1n          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat Default Consutructor engaged !" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor engaged !" << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
    this->type = obj.type;
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:50:23 by enja              #+#    #+#             */
/*   Updated: 2023/08/24 12:12:54 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Consutructor engaged !" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor engaged !" << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
    this->type = obj.type;
}

Cat& Cat::operator = (const Cat& obj)
{
    if (this != &obj)
            this->type = obj.type;
    return *this;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:38:27 by ky05h1n           #+#    #+#             */
/*   Updated: 2023/08/25 18:11:26 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat Default Consutructor engaged !" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor engaged !" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
    *this = obj;
    std::cout << "WrongCat Copy Constructor engaged !" << std::endl;
}

WrongCat& WrongCat::operator = (const WrongCat& obj)
{
    if (this != &obj)
            this->type = obj.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout  << "mew" << std::endl;
}

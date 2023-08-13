/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 03:46:00 by enja              #+#    #+#             */
/*   Updated: 2023/08/13 02:35:23 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << name << " : deleted" << std::endl;
}

void   Zombie::announce(void)
{
     std::cout << name <<" : BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string& _name)
{
    this->name = _name;
}

Zombie::Zombie(){};
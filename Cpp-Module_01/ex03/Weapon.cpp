/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 03:12:01 by enja              #+#    #+#             */
/*   Updated: 2023/08/13 04:32:27 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
    this->setType(_type);
}

const std::string& Weapon::getType()
{
    return type;
}

void  Weapon::setType(std::string _type)
{
    type = _type;
}

Weapon::Weapon(){};
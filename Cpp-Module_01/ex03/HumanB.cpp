/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 04:26:38 by enja              #+#    #+#             */
/*   Updated: 2023/08/13 06:46:26 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
    name = _name;
}

void HumanB::attack(void)
{
    std::cout << name << " attack with their " << wapn->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& _Wp)
{
    wapn = &_Wp;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 03:04:32 by enja              #+#    #+#             */
/*   Updated: 2023/08/13 04:22:34 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_wapn): wapn(_wapn)
{
    name = _name;
    
}


void HumanA::attack(void)
{
    std::cout << name << " attack with their " << wapn.getType() << std::endl;
}
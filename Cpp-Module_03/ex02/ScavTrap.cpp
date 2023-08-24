/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 09:28:41 by enja              #+#    #+#             */
/*   Updated: 2023/08/24 10:59:43 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
    name = "Unknown";
    hitpoints = 100;
    energypoints = 50;
    attackdamage = 20;
    std::cout << "ScavTrap Default Constructor engaged !" << std::endl;
}

 ScavTrap::~ScavTrap()
 {
    std::cout << "ScavTrap Destructor engaged !" << std::endl;
 }

ScavTrap::ScavTrap(std::string _name)
{
    name = _name;
    hitpoints = 100;
    energypoints = 50;
    attackdamage = 20;
    std::cout << "ScavTrap Constructor engaged !" << std::endl;
}

void ScavTrap::guardGate()
{
    if (energypoints == 0 || hitpoints == 0)
        std::cout << "ScavTrap " << name << " already dead !" << std::endl;
    else    
        std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (energypoints > 0 && hitpoints > 0)
    {
        --energypoints;
        std::cout << "ScavTrap " << name << " attacks " << target <<  " causing " << attackdamage << " points of damage !"<< std::endl;
        return ;
    }
    else
        std::cout << "ScavTrap " << name << " cant't attack , low energy or hit points" << std::endl;
}
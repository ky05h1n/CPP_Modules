/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 06:38:49 by enja              #+#    #+#             */
/*   Updated: 2023/08/17 10:51:21 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name)
{
    name = _name;
    hitpoints = 10;
    energypoints = 10;
    attackdamage = 0;
    std::cout << "Constractor initialized !" << std::endl;
}


ClapTrap::~ClapTrap()
{
    std::cout << "Destructor engaged !" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (energypoints > 0 || hitpoints > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target <<  " causing " << attackdamage << " points of damage !"<< std::endl;
        return ;
    }
    else
        std::cout << "ClapTrap " << name << " cnt't attack , low energy or hit points" << std::endl;
    energypoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitpoints == 0)
    {
        std::cout << "ClapTrap " << name << "already out of hit points" << std::endl;
        return;
    }
    
    hitpoints-= amount;
    std::cout << "ClapTrap " << name << " Toke " << amount << " points of damage"<< std::endl;

    
    if (hitpoints == 0)
        std::cout << "ClapTrap " << name << "is on a low hitpoints he is disabled now !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hitpoints == 0)
        std::cout << "ClapTrap" << name << " can't be repaired cuz the low of the hit points" << std::endl;
    std::cout << "ClapTrap " << name << " toke Back " << amount << " poitnts of eneregy" << std::endl;
    hitpoints += amount;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    this->name = other.name;
    this->hitpoints = other.hitpoints;
    this->energypoints = other.energypoints;
    this->attackdamage = other.attackdamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
    if (this != &rhs)
    {
        this->name = rhs.name;
        this->hitpoints = rhs.hitpoints;
        this->energypoints = rhs.energypoints;
        this->attackdamage = rhs.attackdamage;
    }
    return *this;
}


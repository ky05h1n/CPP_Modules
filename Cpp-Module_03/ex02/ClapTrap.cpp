/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 06:38:49 by enja              #+#    #+#             */
/*   Updated: 2023/08/24 11:59:36 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
        
    name = "Unknown";
    hitpoints = 10;
    energypoints = 10;
    attackdamage = 0;
    std::cout << "ClapTrap Default Constructor engaged" << std::endl;
};

ClapTrap::ClapTrap(std::string _name)
{
    name = _name;
    hitpoints = 10;
    energypoints = 10;
    attackdamage = 0;
    std::cout << "ClapTrap Constractor initialized !" << std::endl;
}


ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor engaged !" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (energypoints > 0 && hitpoints > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target <<  ", causing " << attackdamage << " points of damage !"<< std::endl;
        energypoints--;
        return ;
    }
    else
        std::cout << "ClapTrap " << name << " cant't attack , low energy or hit points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitpoints == 0)
    {
        std::cout << "ClapTrap " << name << " already out of hit points" << std::endl;
        return;
    }
    else
    {
        hitpoints-= amount;
        std::cout << "ClapTrap " << name << " Toke " << amount << " points of damage"<< std::endl;        
    }
    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energypoints == 0 || hitpoints == 0)
    {
        std::cout << "ClapTrap " << name << " can't be repaired cuz the low of the hit points" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << name << " toke Back " << amount << " poitnts of eneregy" << std::endl;
        hitpoints += amount;
    }
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << name << " ClapTrap Copy Constructor engaged" << std::endl;
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


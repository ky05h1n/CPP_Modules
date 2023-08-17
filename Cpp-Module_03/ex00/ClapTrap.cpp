/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 06:38:49 by enja              #+#    #+#             */
/*   Updated: 2023/08/17 07:23:38 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap" << name << " attacks " << target <<  " causing " << attackdamage << "points of damage !"<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap" << name << "Toke" << amount << "points of damage"<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap" << name << "toke Back" << amount << "poitnts of eneregy" << std::endl;
}

ClapTrap::Claptrap(std::string _name)
{
    name = _name;
    std::cout << "Constractor initialized !" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor engaged !" << std::endl;
}
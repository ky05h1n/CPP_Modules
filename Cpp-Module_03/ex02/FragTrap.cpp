/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:51:02 by enja              #+#    #+#             */
/*   Updated: 2023/08/24 11:06:48 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    name = "Unknown";
    hitpoints = 100;
    energypoints = 100;
    attackdamage = 30;
    std::cout << "FragTrap Default Constructor engaged !" << std::endl;   
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    hitpoints = 100;
    energypoints = 100;
    attackdamage = 30;
    std::cout << "FragTrap Constructor engaged !" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor engaged !" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "high Fives Guys !!" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 06:31:25 by enja              #+#    #+#             */
/*   Updated: 2023/08/24 11:25:31 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap{

                private :

                        std::string     name;
                        unsigned int    hitpoints;
                        unsigned int	energypoints;
						unsigned int	attackdamage;

				public :
						ClapTrap(std::string _name);
						ClapTrap();
						~ClapTrap();
						ClapTrap(const ClapTrap& other);
						ClapTrap& operator=(const ClapTrap& rhs);
						void attack(const std::string& target);
						void takeDamage(unsigned int amount);
						void beRepaired(unsigned int amount);		
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 06:31:25 by enja              #+#    #+#             */
/*   Updated: 2023/08/17 07:24:35 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap{

                private :

                        std::string     name;
                        int             hitpoint;
                        int				energypoints;
						int				attackdamage;

				public :
						ClapTrap(std::string& _name){};
						~ClapTrap();
						void attack(const std::string& target);
						void takeDamage(unsigned int amount);
						void beRepaired(unsigned int amount);
};
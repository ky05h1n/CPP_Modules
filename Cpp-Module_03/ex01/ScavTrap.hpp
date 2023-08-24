/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 09:29:25 by enja              #+#    #+#             */
/*   Updated: 2023/08/24 11:26:25 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{


                 public:

                        ScavTrap();
                        ~ScavTrap();
                        ScavTrap(const ScavTrap& cp);
                        ScavTrap& operator = (ScavTrap &obj);
                        ScavTrap(std::string _name);
                        void guardGate();
                        void attack(const std::string& target);
};
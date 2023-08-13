/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 02:55:38 by enja              #+#    #+#             */
/*   Updated: 2023/08/13 04:21:44 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
    
class HumanA{

        private:
                Weapon& wapn;
                std::string name;
             
        public:
                HumanA(std::string _name, Weapon &_wapn);
                void attack(void);
};
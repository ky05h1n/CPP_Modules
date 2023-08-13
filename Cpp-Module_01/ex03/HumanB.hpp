/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 02:59:57 by enja              #+#    #+#             */
/*   Updated: 2023/08/13 06:41:53 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
    
class HumanB{

        private:
                Weapon*     wapn;
                std::string name;
        public:
                HumanB(std::string _name);
                void attack(void);
                void setWeapon(Weapon& _Wp);
};
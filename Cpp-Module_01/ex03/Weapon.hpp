/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 02:49:35 by enja              #+#    #+#             */
/*   Updated: 2023/08/13 04:17:53 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon{
        
        private :
                std::string type; 
        public:
                Weapon();
                Weapon(std::string _type);
                const std::string& getType();
                void  setType(std::string _type);
};
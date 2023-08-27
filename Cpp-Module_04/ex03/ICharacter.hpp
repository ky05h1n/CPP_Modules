/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:36:15 by enja              #+#    #+#             */
/*   Updated: 2023/08/26 22:45:33 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"
class AMateria;
class ICharacter{
                                public:
                
                                           virtual ~ICharacter() {}
                                           virtual std::string const & getName() const = 0;
                                           virtual void equip(AMateria* m) = 0;
                                           virtual void unequip(int idx) = 0;
                                           virtual void use(int idx, ICharacter& target) = 0;
};
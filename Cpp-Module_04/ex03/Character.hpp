/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:40:48 by enja              #+#    #+#             */
/*   Updated: 2023/08/26 22:36:11 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {

                private:

                        std::string name;
                        AMateria *ptr[4];
                        
                public :
                        
                        Character();
                        ~Character();
                        Character(const Character& obj);
                        Character(std::string name);
                        const Character& operator = (const Character& obj);
                        std::string const & getName() const;
                        void equip(AMateria* m);
                        void unequip(int idx);
                        void use(int idx, ICharacter& target);                          
                        AMateria* Tosave(int i);
};
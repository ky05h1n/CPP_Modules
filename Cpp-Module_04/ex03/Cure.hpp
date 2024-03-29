/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:48:01 by enja              #+#    #+#             */
/*   Updated: 2023/08/26 10:15:44 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria{

                public:

                        Cure();
                        ~Cure();
                        Cure(const Cure& obj);
                        const Cure& operator = (const Cure& obj);
                        virtual void use(ICharacter& target);
                        AMateria* clone() const;
                        
};
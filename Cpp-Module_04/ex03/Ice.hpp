/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:23:20 by enja              #+#    #+#             */
/*   Updated: 2023/08/25 21:44:38 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria{

                public:

                        Ice();
                        ~Ice();
                        Ice(const Ice& obj);
                        const Ice& operator = (const Ice& obj);
                        virtual void use(ICharacter& target)
                        virtual AMateria* clone() const;
};
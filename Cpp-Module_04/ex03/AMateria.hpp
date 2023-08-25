/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 20:24:45 by enja              #+#    #+#             */
/*   Updated: 2023/08/25 20:36:46 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>


class AMateria{

                protected:
                           std::string type;
                public:

                            AMateria();
                            ~AMateria();
                            AMateria(const AMateria& obj);
                            const AMateria& operator = (const AMateria& obj);

                            AMateria(std::string const & type);
                            std::string const & getType() const; //Returns the materia type
                            virtual AMateria* clone() const = 0;                                    
                            virtual void use(ICharacter& target);    

    
};
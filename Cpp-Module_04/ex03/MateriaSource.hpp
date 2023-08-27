/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:24:24 by enja              #+#    #+#             */
/*   Updated: 2023/08/26 21:28:39 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource{

                    private:
                        AMateria *am[4];
                    public :
                            MateriaSource();
                            ~MateriaSource();
                            MateriaSource(const MateriaSource& rhs);
                            MateriaSource& operator = (const MateriaSource& other);
                            void learnMateria(AMateria*);
                            AMateria* createMateria(std::string const & type);
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:58:04 by enja              #+#    #+#             */
/*   Updated: 2023/08/26 21:26:58 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (size_t i = 0; i < 4; i++)
    {
        am[i] = NULL;
    }
    
}

MateriaSource::~MateriaSource()
{
    for (size_t i = 0; i < 4; i++)
    {
        if (am[i])
            delete am[i];
    }
    
}

MateriaSource::MateriaSource(const MateriaSource &rhs)
{
    (void)rhs;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    (void)other;
    return *this;
}

void MateriaSource::learnMateria(AMateria *amateria)
{
    for (int i = 0; i < 4; i++)
    {
        if (am[i] == NULL)
        {
            am[i] = amateria;
            return ;
        }   
    }   
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (type == am[i]->getType())
            return am[i]->clone();
    }
    return NULL;
}



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:10:53 by enja              #+#    #+#             */
/*   Updated: 2023/08/26 19:56:24 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class IMateriaSource
{
                public:
                        virtual ~IMateriaSource() {};
                        virtual void learnMateria(AMateria*) = 0;
                        virtual AMateria* createMateria(std::string const & type) = 0;
};
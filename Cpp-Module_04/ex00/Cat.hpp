/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:32:24 by enja              #+#    #+#             */
/*   Updated: 2023/08/24 11:47:33 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal{

                        public :

                                Cat();
                                ~Cat();
                                Cat(const Cat& obj);
                                Cat& operator = (const Cat& obj);
    
};

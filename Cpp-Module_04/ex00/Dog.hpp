/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:32:32 by enja              #+#    #+#             */
/*   Updated: 2023/08/24 11:52:41 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal{
    

                        public :

                                Dog();
                                ~Dog();
                                Dog(const Dog& obj);
                                Dog& operator = (const Dog& obj);
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:32:32 by enja              #+#    #+#             */
/*   Updated: 2023/08/25 16:23:08 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    
                        private :

                                Brain* ptr;

                        public :

                                Dog();
                                ~Dog();
                                Dog(const Dog& obj);
                                Dog& operator = (const Dog& obj);
                                void makeSound() const;
};
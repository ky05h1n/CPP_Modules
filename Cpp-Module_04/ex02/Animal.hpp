/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:24:14 by enja              #+#    #+#             */
/*   Updated: 2023/08/25 19:41:35 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal{

            protected :
            
                        std::string type;

            public :

                        Animal();
                        virtual ~Animal();
                        Animal(const Animal& obj);
                        Animal& operator = (const Animal& obj);
                        virtual void makeSound() const = 0;
                        std::string getType() const;
};
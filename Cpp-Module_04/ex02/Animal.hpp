/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ky05h1n <ky05h1n@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:24:14 by enja              #+#    #+#             */
/*   Updated: 2023/08/24 20:28:35 by ky05h1n          ###   ########.fr       */
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
                        virtual void makeSound() const;
                        std::string getType() const;
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ky05h1n <ky05h1n@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:37:46 by ky05h1n           #+#    #+#             */
/*   Updated: 2023/08/24 20:41:07 by ky05h1n          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal{

            protected :
            
                        std::string type;

            public :

                        WrongAnimal();
                        virtual ~WrongAnimal();
                        WrongAnimal(const WrongAnimal& obj);
                        WrongAnimal& operator = (const WrongAnimal& obj);
                        void makeSound() const;
                        std::string getType() const;
};
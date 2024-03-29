/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ky05h1n <ky05h1n@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:04:24 by enja              #+#    #+#             */
/*   Updated: 2023/08/24 20:34:31 by ky05h1n          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal{
    

                public :
                        
                        
                        Cat();
                        Cat(std::string type);
                        ~Cat();
                        Cat(const Cat& obj);
                        Cat& operator = (const Cat& obj);
                        void makeSound() const;

};
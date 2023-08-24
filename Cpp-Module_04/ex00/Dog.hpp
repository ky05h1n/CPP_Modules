/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ky05h1n <ky05h1n@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 11:32:32 by enja              #+#    #+#             */
/*   Updated: 2023/08/24 20:34:03 by ky05h1n          ###   ########.fr       */
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
                                void makeSound() const;
};
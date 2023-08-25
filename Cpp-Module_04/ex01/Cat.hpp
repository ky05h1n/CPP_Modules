/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:04:24 by enja              #+#    #+#             */
/*   Updated: 2023/08/25 16:21:57 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    
                private :
                        
                        Brain* ptr;
                                
                public :
                                    
                        Cat();
                        Cat(std::string type);
                        ~Cat();
                        Cat(const Cat& obj);
                        Cat& operator = (const Cat& obj);
                        void makeSound() const;

};
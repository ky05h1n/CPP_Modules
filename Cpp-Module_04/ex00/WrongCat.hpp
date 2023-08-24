/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ky05h1n <ky05h1n@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:38:13 by ky05h1n           #+#    #+#             */
/*   Updated: 2023/08/24 20:47:25 by ky05h1n          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    

                public :
                        
                        
                        WrongCat();
                        WrongCat(std::string type);
                        ~WrongCat();
                        WrongCat(const WrongCat& obj);
                        WrongCat& operator = (const WrongCat& obj);
                        void makeSound() const;

};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 15:13:23 by enja              #+#    #+#             */
/*   Updated: 2023/08/25 15:46:21 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "Animal.hpp"

class Brain{


                private :

                        std::string ideas[100];

                public :

                        Brain();
                        ~Brain();
                        Brain(const Brain& obj);
                        const Brain& operator = (const Brain& obj);
};

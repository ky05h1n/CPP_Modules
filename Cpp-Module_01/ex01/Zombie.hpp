/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 02:43:07 by enja              #+#    #+#             */
/*   Updated: 2023/08/13 02:37:59 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie{

    private:
            std::string name;
    public:
        Zombie();
        ~Zombie();
        void setName(std::string& name);
        void    announce(void);
};


Zombie*     newZombie(std::string name);
Zombie*     zombieHorde( int N, std::string name);
 


#endif
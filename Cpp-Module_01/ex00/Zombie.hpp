/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 02:43:07 by enja              #+#    #+#             */
/*   Updated: 2023/08/12 03:48:20 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie{
    

    private:
            std::string name;
    public:
        Zombie(std::string _name);
        ~Zombie();
        void    announce(void);
};


Zombie*     newZombie(std::string name);
void        randomChump(std::string name);


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 04:08:58 by enja              #+#    #+#             */
/*   Updated: 2023/08/13 02:35:12 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name)
{
    Zombie* zombies = new Zombie[N];

    for (int i = 0; i < N ; i++)
    {
        zombies[i].setName(name);
        zombies[i].announce();
    }
    return zombies;
}

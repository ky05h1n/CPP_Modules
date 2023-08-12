/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 03:07:48 by enja              #+#    #+#             */
/*   Updated: 2023/08/12 03:36:37 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* Nzombie = newZombie("first zombie");
    Nzombie->announce();
    delete Nzombie;

    randomChump("second zombie");
} 
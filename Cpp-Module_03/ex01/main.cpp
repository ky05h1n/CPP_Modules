/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 07:03:43 by enja              #+#    #+#             */
/*   Updated: 2023/08/27 13:53:12 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main() {

    // ScavTrap obj("Jim");

    ClapTrap *o = new ScavTrap("mess");
    o->attack("dasd");
    delete o;
    // for (int i = 0; i < 49; i++)
    //     obj.attack("he");
    // obj.guardGate();
    // obj.beRepaired(11);
    return 0;
}

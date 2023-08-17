/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 07:03:43 by enja              #+#    #+#             */
/*   Updated: 2023/08/17 10:54:07 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main() {
    ClapTrap amine("amine");
    ClapTrap messi("messi");
    ClapTrap mehdi("mehdi");

    amine.attack("dba3");
    amine.attack("shakira");
    amine.attack("neuer");
    amine.takeDamage(5);
    messi.takeDamage(10);
    messi.takeDamage(10);
    mehdi.beRepaired(10);
    mehdi.takeDamage(19);
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 07:03:43 by enja              #+#    #+#             */
/*   Updated: 2023/08/23 21:48:18 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main() {
    ClapTrap ahmed;
    ClapTrap amine("amine");
    ClapTrap messi("messi");
    ClapTrap mehdi("mehdi");

    ahmed.attack("Wallo");

    amine.attack("dba3");
    amine.attack("shakira");
    amine.attack("neuer");
    amine.takeDamage(9);
    amine.beRepaired(10);
    
    messi.takeDamage(9);
    messi.beRepaired(9);
    messi.attack("Ronaldo");
    messi.takeDamage(10);
    
    mehdi.beRepaired(10);
    mehdi.takeDamage(19);
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:47:23 by enja              #+#    #+#             */
/*   Updated: 2023/08/24 11:01:23 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{


                public : 

                        FragTrap();
                        ~FragTrap();
                        FragTrap(const FragTrap& obj);
                        FragTrap& operator = (FragTrap& obj);
                        FragTrap(std::string name);
                        void highFivesGuys(void);
};
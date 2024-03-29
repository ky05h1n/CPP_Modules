/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 03:53:54 by enja              #+#    #+#             */
/*   Updated: 2023/08/17 00:32:04 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <string>


class Harl{

                private :

                        void debug( void );
                        void info( void );
                        void warning( void );
                        void error( void );
                public :

                        void complain(std::string level);
                        void (Harl::*PtrTofonc)(void);
};

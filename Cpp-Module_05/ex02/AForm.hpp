/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:05:58 by enja              #+#    #+#             */
/*   Updated: 2023/08/30 17:19:03 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>

class Bureaucrat;
class AForm {
    
                private:

                        const std::string name;
                        bool              sig;
                        const int         gradeSign;
                        const int         gradeRequired;
                
                public:

                        virtual    void execute(Bureaucrat const & executor) = 0;
};

#include "Bureaucrat.hpp"
std::ostream& operator << (std::ostream& out , Form& obj);
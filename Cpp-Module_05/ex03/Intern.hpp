/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:30:21 by enja              #+#    #+#             */
/*   Updated: 2023/09/02 20:43:27 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{


            public :

                    Intern();
                    ~Intern();
                    Intern(const Intern& obj);
                    const Intern& operator = (const Intern& obj);

                    AForm*    makeForm(std::string name, std::string target);
    
};
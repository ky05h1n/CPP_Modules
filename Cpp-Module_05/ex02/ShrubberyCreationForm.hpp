/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:05:39 by enja              #+#    #+#             */
/*   Updated: 2023/09/01 21:03:25 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm{

                private:

                        std::string target;

                public :

                        ShrubberyCreationForm(std::string target);

                        ShrubberyCreationForm();
                        ~ShrubberyCreationForm();
                        ShrubberyCreationForm(const ShrubberyCreationForm& obj);
                        const ShrubberyCreationForm& operator = (const ShrubberyCreationForm& obj);

                        void    execute(Bureaucrat const & executor)const;
};
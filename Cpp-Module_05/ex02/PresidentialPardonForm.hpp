/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:12:39 by enja              #+#    #+#             */
/*   Updated: 2023/09/01 21:02:03 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm{

                private:

                        std::string target;

                public :

                        PresidentialPardonForm(std::string target);
                        
                        PresidentialPardonForm();
                        ~PresidentialPardonForm();
                        PresidentialPardonForm(const PresidentialPardonForm& obj);
                        const PresidentialPardonForm& operator = (const PresidentialPardonForm& obj);

                        void    execute(Bureaucrat const & executor)const;
};
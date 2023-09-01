/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:13:19 by enja              #+#    #+#             */
/*   Updated: 2023/08/31 16:28:58 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm{

                private:
                
                        std::string target;
                        
                public :

                        RobotomyRequestForm(std::string target);

                        RobotomyRequestForm();
                        ~RobotomyRequestForm();
                        RobotomyRequestForm(const RobotomyRequestForm& obj);
                        const RobotomyRequestForm& operator = (const RobotomyRequestForm& obj);

                        void    execute(Bureaucrat const & executor);
};
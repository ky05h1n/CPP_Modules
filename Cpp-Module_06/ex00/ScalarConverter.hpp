/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 18:51:55 by enja              #+#    #+#             */
/*   Updated: 2023/09/04 20:26:59 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ScalarConverter {

                public :
                                    
                        ScalarConverter();
                        ~ScalarConverter();
                        ScalarConverter(const ScalarConverter& obj);
                        ScalarConverter& operator = (const ScalarConverter& obj);

                        void    convert(std::string convert);
};
